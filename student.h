#ifndef STUDENT_H
#define STUDENT_H
#include<iostream>
#include<cstring>
using namespace std;

class Student
{
 public:
  Student();
  ~Student();
  get_id();
  getStudent();
  
 protected:
  char fname[20];
  char lname[20];
  float gpa;
  int id;
};

#endif
  

