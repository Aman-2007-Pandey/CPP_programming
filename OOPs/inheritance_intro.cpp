#include <iostream>
using namespace std;
class Student
{
public:
    void showStudent()
    {
        cout << "I am a Student And My Name Is PANDEY" << endl;
    }
};
class Result : public Student
{
public:
    void showResult()
    {
        cout << "Result is 8.4 SGPA" << endl;
    }
};
int main()
{
    Result AP;   
    AP.showStudent(); 
    AP.showResult();
    return 0;
}