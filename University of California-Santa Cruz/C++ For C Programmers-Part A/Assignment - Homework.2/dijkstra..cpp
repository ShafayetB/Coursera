//===============================================================================================//
// Header:                                                                                       //
//  Homework 2 - C++ for C Programmers - Coursera 2013                                           //
//                                                                                               //
//  Created by Salehe Erfanian Ebadi - s.erfanianebadi@qmul.ac.uk                                //
// Purpose:                                                                                      //
//  This C++ program will calculates the Shortest Path with the Dijkstra's Algorithm for a graph //
//                                                                                               //
// IDE used to develop the program:                                                              //
//  Microsoft Visual Studio Express 2013 for Windows Desktop Version 12.0.21005.1 REL            //
//                                                                                               //
// Explanation:                                                                                  //
//  This program will take the number of nodes (0 - 50], graph density (%20 or %40), and the     //
//  source node as input from the user. It will randomly generate an adjacency matrix for the    //
//  graph of the size and density the user has specified. Then it will generate the shortest     //
//  paths from the selected source node to all other nodes with the respective cost for that     //
//  path. The infinity value in this program is set to 999 and represents either no edge         //
//  between two nodes in the graph, or the initial cost for the unvisited nodes.                 //
//                                                                                               //
// To run:                                                                                       //
//  Simply run the program and enter the values as requested by the program.                     //
//===============================================================================================//


#include <iostream>
#include <math.h>

#define INFINITY 999

using namespace std;

class Dijkstra{

private:
	int adjMatrix[50][50];    //initially set to 50 (maximum)
	int predecessor[50], distance[50];
	bool mark[50];    //keep track of visited node
	int source;
	int numOfVertices;
	int density;
	int densityArray[30];    //initially set to %(100 - 40) of maximum (50)

public:
	void read();

	void initialize();

	int getClosestUnmarkedNode();
	
	void calculateDistance();
	
	void output();
	void printPath(int);
};


void Dijkstra::read(){
	//
	// Function read() reads No. of vertices, graph density, and source node
	// and randomly calculates the Adjacency Matrix. The number of vertices 
	// must be greather than zero, all members of Adjacency Matrix are postive
	// as distances are always positive. The source vertex must also be positive
	// from 0 to noOfVertices - 1
	//

	// get the number of vertices in the graph as an input (between [0 - 50])
	cout << "Enter the number of vertices of the graph (should be (0 - 50] ):\n";
	cin >> numOfVertices;
	while ((numOfVertices <= 0) | (numOfVertices > 50)) {
		cout << "Enter the number of vertices of the graph (should be (0 - 50] ):\n";
		cin >> numOfVertices;
	}

	// get the density of the graph as an input (either %20 or %40)
	cout << "\nEnter the amount of node density (enter 20 for %20 and 40 for %40):\n";
	cin >> density;
	while ((density != 20) & (density != 40)) {
		cout << "Enter the amount of node density (enter 20 for %20 and 40 for %40):\n";
		cin >> density;
	}

	// randomly choose coordinates where the adjacency matrix value will be inf (according to the density)
	for (int i = 0; i < (int)round(numOfVertices * density / 100); i++) {
		densityArray[i] = rand() % numOfVertices;
	}

	// calculate the costs for the adjacency matrix for the graph (between [0 - 10])
	cout << "\nThe costs for Edges are being generated randomly for a graph with " << numOfVertices << " nodes.\n";
	for (int i = 0; i < numOfVertices; i++) {
		for (int j = 0; j < numOfVertices; j++) {
			adjMatrix[i][j] = rand() % 10; //INFINITY;
			adjMatrix[j][i] = adjMatrix[i][j];

			if (*find(densityArray, densityArray + (int)round(numOfVertices * density / 100), j) == j) {
				adjMatrix[i][j] = INFINITY;
				adjMatrix[j][i] = adjMatrix[i][j];
			}

			if (i == j) {
				adjMatrix[i][j] = 0;
			}
		}
	}

	// print out the generated cost matrix
	cout << "\nThe randomly generated edge cost matrix is:\n\n";
	for (int i = 0; i < numOfVertices; i++) {
		for (int j = 0; j < numOfVertices; j++) {
			cout << adjMatrix[i][j] << " ";
		}
		cout << endl;
	}

	// get the source vertex as input from the user
	cout << "\nEnter the source vertex (must be within [0 - " << numOfVertices << ") ):\n";
	cin >> source;
	cout << endl;

	while ((source < 0) | (source > numOfVertices - 1)) {
		cout << "Source vertex should be between 0 and " << numOfVertices - 1 << endl;
		cout << "Enter the source vertex again\n";
		cin >> source;
		cout << endl;
	}

	cout << "The shortest paths (if existing) from the selected source to all other nodes are:\n";
	cout << "==========================================\n";
	cout << "Source" << "..Path" << "..Destination" << "->Total path cost\n";
	cout << "==========================================\n";
}


void Dijkstra::initialize(){
	//
	// Function initialize initializes all the data members at the begining of
	// the execution. The distance between source to source is zero and all other
	// distances between source and vertices are infinity. The mark is initialized
	// to false and predecessor is initialized to -1
	//

	for (int i = 0; i<numOfVertices; i++) {
		mark[i] = false;
		predecessor[i] = -1;
		distance[i] = INFINITY;
	}
	distance[source] = 0;
}


int Dijkstra::getClosestUnmarkedNode(){
	//
	// Function getClosestUnmarkedNode returns the node which is nearest from the
	// Predecessor marked node. If the node is already marked as visited, then it search
	// for another node.
	//

	int minDistance = INFINITY;
	int closestUnmarkedNode;
	for (int i = 0; i<numOfVertices; i++) {
		if ((!mark[i]) & (minDistance >= distance[i])) {
			minDistance = distance[i];
			closestUnmarkedNode = i;
		}
	}
	return closestUnmarkedNode;
}


void Dijkstra::calculateDistance(){
	//
	// Function calculateDistance calculates the minimum distances from the source node to
	// Other nodes.
	//

	initialize();
	int minDistance = INFINITY;
	int closestUnmarkedNode;
	int count = 0;
	while (count < numOfVertices) {
		closestUnmarkedNode = getClosestUnmarkedNode();
		mark[closestUnmarkedNode] = true;
		for (int i = 0; i<numOfVertices; i++) {
			if ((!mark[i]) & (adjMatrix[closestUnmarkedNode][i]>0)) {
				if (distance[i] > distance[closestUnmarkedNode] + adjMatrix[closestUnmarkedNode][i]) {
					distance[i] = distance[closestUnmarkedNode] + adjMatrix[closestUnmarkedNode][i];
					predecessor[i] = closestUnmarkedNode;
				}
			}
		}
		count++;
	}
}


void Dijkstra::printPath(int node){
	//
	// Function printPath prints the results (path).
	//

	if (node == source)
		cout << node << "..";
	else if (predecessor[node] == -1)
		cout << "No path from source to " << node << " ";
	else {
		printPath(predecessor[node]);
		cout << node << "..";
	}
}


void Dijkstra::output(){
	//
	// Function output prints the results with help from function printPath.
	//

	for (int i = 0; i<numOfVertices; i++) {
		if (i == source)
			cout << source << ".." << source;
		else
			printPath(i);
		cout << "->" << distance[i] << endl;
	}
}


int main(){
	// initialize a graph
	Dijkstra G;
	G.read();
	G.calculateDistance();
	G.output();

	// these cin.get(); are for users with MS Visual Studio.
	// they will keep the console window open for the user to see the results.
	cin.get();

	cin.get();

	return 0;
}
