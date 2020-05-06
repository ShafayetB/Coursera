//===============================================================================================//
// Header:                                                                                       //
//  Homework 3 - C++ for C Programmers - Coursera 2013                                           //
//                                                                                               //
//  Created by Salehe Erfanian Ebadi - s.erfanianebadi@qmul.ac.uk                                //
// Purpose:                                                                                      //
//  This C++ program calculates the Prim's algorithm for a Minimum Spanning Tree                 //
//                                                                                               //
// IDE used to develop the program:                                                              //
//  Microsoft Visual Studio Express 2013 for Windows Desktop Version 12.0.21005.1 REL            //
//                                                                                               //
// Explanation:                                                                                  //
//  This program calculates the Prim's algorithm for a Minimum Spanning Tree.                    //
//  The input to the program is an adjacency matrix of a graph with 20 nodes.                    //
//  The 'Sample Test Data' has been provided with the instructor, however it is in the form      //
//    of an adjacency list. I have converted this list into an adjacency matrix using the sparse //
//    method in MATLAB. This matrix is then converted into a single array of 400 numbers for     //
//    the program input. I simply did this because my Dijkstra's implementation used adj. matrix //
//    rather than an adj. list.                                                                  //
//  The program returns the output for MST in form of the cost and the tree (the edges).         //
//                                                                                               //
// To run:                                                                                       //
//  Simply run the program and the program returns the MST (connected nodes and their cost)      //
//===============================================================================================//

#include <iostream>
#include <conio.h>
#include <vector>

#include "adjmatrix.h"

#define ROW 20    // preset to 20 (as the provided sample data is)
#define COL 20
#define inf 5000  // inf for infinity

using namespace std;


class prims {

	int graph[ROW][COL], nodes;

public:

	void createGraph();
	void primsAlgo();
};


void prims::createGraph() {
	int i, j;
	int num = 0;
	nodes = 20;

	// make the 2D graph with the adjacency matrix values
	for (i = 0; i < 20; i++) {
		for (j = 0; j < 20; j++) {
			graph[i][j] = adjmat[num];
			num++;
		}
	}

	// assign infinity to all graph[i][j] where weight is 0.
	for (i = 0; i < nodes; i++) {
		for (j = 0; j < nodes; j++) {
			if (graph[i][j] == 0)
				graph[i][j] = inf;
		}
	}

	// diagonal of the matrix is 0
	for (i = 0; i < 20; i++) {
		for (j = 0; j < 20; j++) {
			if (i == j) {
				graph[i][j] = 0;
			}
		}
	}
}


void prims::primsAlgo() {
	int selected[ROW], i, j, ne, x, y, cost; // ne is no. of edges

	for (i = 0; i < nodes; i++) {
		selected[i] = false;
	}

	selected[0] = true;
	ne = 0;

	while (ne < nodes - 1) {
		int min = inf;

		for (i = 0; i<nodes; i++) {
			if (selected[i] == true) {
				for (j = 0; j<nodes; j++) {
					if (selected[j] == false) {
						if (min > graph[i][j])
						{
							min = graph[i][j];
							x = i;
							y = j;
							cost = min;
						}
					}
				}
			}
		}
		selected[y] = true;

		// print out the results (connected nodes with the least cost)
		if (x + 1 < 10) {
			cout << "\n " << x + 1 << " --> ";
		}
		else {
			cout << "\n" << x + 1 << " --> ";
		}

		if (y + 1 < 10) {
			cout << " " << y + 1 << "\t Cost = " << cost;
		}
		else {
			cout << y + 1 << "\t Cost = " << cost;
		}

		ne = ne + 1;
	}
}


int main() {

	// initialization
	prims MST;

	cout << "\nPrims Algorithm to find a Minimum Spanning Tree for a graph of 20 nodes:\n";
	cout << "\nConnected nodes  Connection cost\n";
	cout << "--------------------------------\n";

	MST.createGraph();
	MST.primsAlgo();

	// these are for MS Visual Studio users to keep the console window open
	cin.get();
	cin.get();

	return 0;
}
