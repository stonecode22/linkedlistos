#include<iostream>
#include<cstring>
#include"student.h"
using namespace std;

Student::Student(Student* )
{
  first_name = new char[20];
  last_name = new char[20];
  id = new char[7];
  gpa = new char[5];

  strcpy(first_name, fname);
  strcpy(last_name, lname);
  strcpy(id, s_id);
  strcpy(gpa, grade);
}

Student::~Student()
{
  delete[] first_name;
  delete[] last_name;
  delete[] id;
  delete[] gpa;
}

char* Student::getStudent()
{
  return first_name;
  return last_name;
  return id;
  return gpa;
}

void Student::printStudent()
{
  cout << "Name: " << first_name << " " << last_name << endl;
  cout << "ID: " << id << endl;
  cout << "GPA: " << gpa << endl;
}
