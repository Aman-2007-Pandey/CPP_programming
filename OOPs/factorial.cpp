#include<iostream>
using namespace std;
class factorial
{
    public:
    int num , fact=1;
    void getdata(){
        cout<<"enter the number for the factorial"<<num<<endl;
        cin>>num;
                  }
    void calculate (){
        for(int i=1;i<=num;i++){
        fact=fact*i;
        }
    }     
    void display(){
        cout<<"factorial of the number is"<<fact<<endl;
    }         
};
int main(){
    factorial f;
    f.getdata();
    f.calculate();
    f.display();
}
