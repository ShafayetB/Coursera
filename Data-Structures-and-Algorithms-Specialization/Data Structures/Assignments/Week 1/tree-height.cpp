#include <algorithm>
#include <iostream>
#include <vector>
#include <queue>
#include <bits/stdc++.h>
#if defined(__unix__) || defined(__APPLE__)
#include <sys/resource.h>
#endif
using namespace std;
class Node;
int max(int a, int b)
{
  return a > b ? a : b;
}
class Node
{
public:
  int key;
  Node *parent;
  std::vector<Node *> children;

  Node()
  {
    this->parent = NULL;
  }

  void setParent(Node *theParent)
  {
    parent = theParent;
    parent->children.push_back(this);
  }
};

int maxHeight(Node *root)
{
  if (!root)
    return 0;
  queue<Node *> q;
  q.push(root);
  int ht = 0;
  while (!q.empty())
  {
    ht++;
    int l = q.size();
    for (int i = 0; i < l; i++)
    {
      Node *cur = q.front();
      q.pop();
      for (auto child : cur->children)
      {
        q.push(child);
      }
    }
  }

  return ht;
}
int main_with_large_stack_space()
{
  std::ios_base::sync_with_stdio(0);
  int n;
  std::cin >> n;

  std::vector<Node> nodes;
  nodes.resize(n);
  int root = 0;
  for (int child_index = 0; child_index < n; child_index++)
  {
    int parent_index;
    std::cin >> parent_index;
    if (parent_index >= 0)
      nodes[child_index].setParent(&nodes[parent_index]);
    else
      root = child_index;
    nodes[child_index].key = child_index;
  }

  // Replace this code with a faster implementation

  cout << maxHeight(&nodes[root]) << endl;
  return 0;
}

int main(int argc, char **argv)
{
#if defined(__unix__) || defined(__APPLE__)
  // Allow larger stack space
  const rlim_t kStackSize = 16 * 1024 * 1024; // min stack size = 16 MB
  struct rlimit rl;
  int result;

  result = getrlimit(RLIMIT_STACK, &rl);
  if (result == 0)
  {
    if (rl.rlim_cur < kStackSize)
    {
      rl.rlim_cur = kStackSize;
      result = setrlimit(RLIMIT_STACK, &rl);
      if (result != 0)
      {
        std::cerr << "setrlimit returned result = " << result << std::endl;
      }
    }
  }

#endif
  return main_with_large_stack_space();
}