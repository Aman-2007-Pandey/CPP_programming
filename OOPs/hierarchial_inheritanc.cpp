#include<iostream>
using namespace std;
class A  
{
    public:
    int displayA()
    {
        cout<<"this is class A"<<endl;
    }
};
  class B : public A
{
    public:
    int displayB()
    {
        cout<<"this is class B"<<endl;
    }
};
  class C :  public A
{
    public:
    int displayC()
    {
        cout<<"this is class C"<<endl;
    }
};
 

 int main()
{
    B obj1;
    C obj2;
    obj1.displayA();
    obj1.displayB();
    obj2.displayA();
    obj2.displayC();
}