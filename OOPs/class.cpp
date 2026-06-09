#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int rollNo;

    void display()
    {
        cout << "Student Name: " << name << endl;
        cout << "Roll Number: " << rollNo << endl;
    }
};

int main()
{
    
    Student s1;

    
    s1.name = "Rahul";
    s1.rollNo = 101;

    
    s1.display();

    return 0;
}