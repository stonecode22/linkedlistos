#include'student.h'
#include "node.h"
#include <iostream>
#include <vector>
using namespace std;

Node::Node()
{
  vector<Node*>entry;
  next = NULL;
}

Node::~Node()
{
  delete &new_vect;
  next = NULL;
}

void Node::setVect(vector<Student*>new_vect)
{
  entry = new_vect;
}

Node* Node::getVect()
{
  return entry;
}

void Node::setNext(Node* new_next)
{
  next = new_next;
}

Node* Node::getNext()
{
  return next;
}


