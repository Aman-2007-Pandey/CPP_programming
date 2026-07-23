#include<iostream>
using namespace std;
int main()
{
    int a,b,temp;
    cout<<"enter the value of a:";
    cout<<"enter the value of b:";
    cin>>a>>b;
    temp=a;
    a=b;
    b=temp;
    cout<<"a is:"<<a<<"b is:"<<b;
    return 0;

}