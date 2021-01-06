#include <iostream>
#include <vector>
#include <string>
#include <cassert>
#include <algorithm>
#include<bits/stdc++.h>
using std::cin;
using std::string;
using std::vector;
using std::cout;
using std::max_element;
using namespace std;
class StackWithMax {
    vector <pair<int,int>> stack;

  public:

    void Push(int value) {
        if(stack.size()==0)
            stack.push_back({value,value});
        else
            stack.push_back({value,max(stack.back().second,value)});
        
        
    }

    void Pop() {
        assert(stack.size());
        stack.pop_back();
    }

    int Max() const {
        assert(stack.size());
        return stack.back().second;
    }
};

int main() {
    int num_queries = 0;
    cin >> num_queries;

    string query;
    string value;

    StackWithMax stack;

    for (int i = 0; i < num_queries; ++i) {
        cin >> query;
        if (query == "push") {
            cin >> value;
            stack.Push(std::stoi(value));
        }
        else if (query == "pop") {
            stack.Pop();
        }
        else if (query == "max") {
            cout << stack.Max() << "\n";
        }
        else {
            assert(0);
        }
    }
    return 0;
}