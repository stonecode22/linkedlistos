#include"node.h"
#include"student.h"
using namespace std;

int main()
{
  Student* student_1 = new Student(11);
  Student* student_2 = new Student(22);
  Student* student_3 = new Student(33);

  Node* node_1 = new Node(student_1);
  Node* node_2 = new Node(student_2);
  Node* node_3 = new Node(student_3);

  node_1 -> setNext(node_2);
  cout << node_1 -> getNext() -> getStudent() -> get_id() << endl;
  return 0;
}
