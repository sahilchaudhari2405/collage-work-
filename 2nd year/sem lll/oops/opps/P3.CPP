#include <iostream>
using namespace std;
class Student
{
public:
    string Name;
    int age;
    long long int number;
    void inputdata()
    {
        cout << "Enter name of student =";
        cin >> Name;
        cout << "Enter age of student =";
        cin >> age;
        cout << "Enter phone number = ";
        cin >> number;
    }
    void outputdata()
    {
        cout << "name of student =";
        cout << Name << endl;
        cout << "age of student =";
        cout << age << endl;
        cout << "phone number";
        cout << number << endl;
    }
};

int main()
{
    Student data;
    data.inputdata();
    data.outputdata();
    return 0;
}