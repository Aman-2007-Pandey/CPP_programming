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
  class B :virtual public A
{
    public:
    int displayB()
    {
        cout<<"this is class B"<<endl;
    }
};
  class C : virtual public A
{
    public:
    int displayC()
    {
        cout<<"this is class C"<<endl;
    }
};
 class D : public B,public C
{
    public:
    int displayD()
    {
        cout<<"this is class D"<<endl;
    }
};
 int main()
{
    D obj;
    obj.displayA();
    obj.displayB();
    obj.displayC();
    obj.displayD();

}