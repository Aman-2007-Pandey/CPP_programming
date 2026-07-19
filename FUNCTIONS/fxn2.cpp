#include<iostream>
using namespace std;
bool isODD(int a)
{
    if(a&1)
    {
        return 0;

    }
    return 1;
    
    }
    int main()
    {
        int num;
        cin>>num;
        if(isODD(num))
        {
            cout<<"number is even"<<endl;
        }
        else{
            cout<<"it is odd"<<endl;        }
    }