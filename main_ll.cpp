#include'Student.h'
#include'Node.h'
#include<iostream>
#include<vector>
using namespace std;

int main()
{
  cout << "Linked List Program:" << endl;
  cout << endl << "Commands:" << endl;
  cout << "    ADD: Create a new entry." << endl;
  cout << "  PRINT: Prints a list of current entries." << endl;
  cout << " DELETE: Deletes an entry (based on student ID)" << endl;
  cout << "AVERAGE: Prints the average GPA of the current entries." << endl;
  cout << "COMMAND: Re-prints usable commands." << endl;
  cout << "   QUIT: Close the program." << endl;
  do
    {
      char choice[20];
      cin >> choice;
      if(strcmp(choice, "ADD") == 0)
	{

	}
      else if(strcmp(choice, "PRINT") == 0)
	{

	}
      else if(strcmp(choice, "DELETE") == 0)
	{

	}
      else if(strcmp(choice, "AVERAGE") == 0)
	{
	  
	}
      else if(strcmp(choice, "COMMAND") == 0)
	{
	  
	}
      else if(strcmp(choice, "QUIT") == 0)
	{
	  return 0;
	}
      else
	{
	  cout << "Invalid command." << endl;
	}
  
}
  
