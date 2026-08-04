#include<iostream>
using namespace std;
int add(int a,float b);
int add(int a,float b)
{
  int c;
    // cout<<"enter the value of a and b";
    // cin>>a>>b;
    c = a+b;
    cout<<"addition is:"<<c<<endl;

}
int main()
{
    add(5.0,7.0);
    return 0;
    
}

