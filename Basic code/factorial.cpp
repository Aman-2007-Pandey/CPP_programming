#include<iostream>
using namespace std;
int main() {
    int y,i,fact=1;
    cout<<"enter the value of y";
    cin>>y;
    for(i = 1;i <= y;i++) {
        fact*= i;
    }
    cout<<"Factorial:"<<fact<<endl;
    return 0;
}
