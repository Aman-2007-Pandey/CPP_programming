#include <iostream>
using namespace std;

//single inheritance.....

class University //base class
{
    private:
    string name;
    public:
    char university_details()
    {
        cout<<"Welcome to sage UNiversity"<<endl;
        cout<<"Address:MP(Bhopal)"<<endl;
        cout<<"Founder:Sanjeev Agarwal"<<endl<<endl<<endl;
        return 0;
    }
    
};

class course: public University//derived class
{
    public:
    char  course_details()
    {
        cout<<"course:Fees"<<endl;
        cout<<"B.Tech:100000"<<endl;
        cout<<"BBA:55500 "<<endl;
        cout<<"BCA:60000"<<endl;
        cout<<"MBA:60000"<<endl<<endl<<endl;
        
        
    }
   
};
class facaulty: public course//derived class
{
    public:
    char facaulty_details()
    {
        
        
       
         cout<<"Course:Facaulty"<<endl;
          cout<<"B.TECH:UMESH SIR"<<endl;
           cout<<"BBA:GAURAV SIR"<<endl;
            cout<<"BCA:ANKIT SIR"<<endl;
            cout<<"MBA:AMAN SIR"<<endl<<endl<<endl;
        

        
    }
};
class student: public facaulty//derived class
{
    public:
    char student_details()
    {
        cout<<"Course:Student"<<endl;
        cout<<"B.TECH:Adarsh"<<endl;
        cout<<"BBA:Aman"<<endl;
        cout<<"BCA:Vipul"<<endl;
        cout<<"MBA:Sudhanshu"<<endl<<endl<<endl;
        }
};
int main()
{
    student s;
    s.university_details();
    s.course_details();
    s.facaulty_details();
    s.student_details();
    
    return 0;
}