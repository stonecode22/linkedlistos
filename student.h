#ifndef STUDENT_H
#define STUDENT_H
#include"Node.h"

class Student : public Node
{
 public:
  Student(char* fname, char* lname, char* s_id,  char* grade);
  ~Student();
  char* getStudent();
  void printStudent();
  
 private:
  char* first_name;
  char* last_name;
  char* id;
  char* gpa;
};

#endif
  

