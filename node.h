#ifndef NODE_H
#define NODE_H
#include<iostream>
#include<vector>
using namespace std;

class Node
{
 public:
  Node();
  ~Node();
  void setVect(vector<Node*>new_vect);
  Node* getVect();
  void setNext(vector<Node*>new_next);
  Node* getNext();

 private:
  vector<Node*>entry;
  vector<Node*>new_vect;
  vector<Node*>next;
};

#endif
