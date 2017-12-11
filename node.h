#ifndef NODE_H
#define NODE_H
#include<iostream>
#include<vector>
using namespace std;

class Node
{
 public:
  Node(Student*);
  ~Node();
  void setVect();
  Node* getVect();
  void setNext();
  Node* getNext();

 private:
  //Student* ...
};

#endif
