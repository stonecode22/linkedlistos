#include"student.h"
#include "node.h"
#include <iostream>
#include <vector>
using namespace std;

Node::Node(Student* sdnt)
{
  s = sdnt;
  n = NULL;
}

Node::~Node()
{
  delete s;
  n = NULL;
}

Node* Node::getNext()
{
  return n;
}

Student* Node::getStudent()
{
  return s;
}

void Node::setNext(Node* current)
{
  n = current;
}
