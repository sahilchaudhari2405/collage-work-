#include <iostream>
using namespace std;
class Student
{
  char name[30];
  int age;
  long long int enrollment;

public:
  Student(char name[], int age, long long int enroll)
  {
    cout << "Name of student=";
    cout << name << endl;
    cout << "age of student";
    cout << age << endl;
    cout << "enrollment number of student=";
    cout << enroll << endl;
  }
  ~Student()
  {
    cout << "Destructor invoked!";
  }
  void fun()
  {
    cout << "hiu";
  }
};
int main()
{
  Student student1("sahil", 19, 1915430221);
  student1.fun();
  return 0;
}