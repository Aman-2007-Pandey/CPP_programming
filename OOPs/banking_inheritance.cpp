#include <iostream>
using namespace std;

//single inheritance.....

class sbi //base class
{
    private:
    string name;
    public:
    int sbi_customer()
    {
        cout<<"welcome to sbi"<<endl;
        return 0;
    }
    
};

class customer_details: public sbi//derived class
{
    public:
    char details()
    {
        cout<<"customer name is ramprasad"<<endl;
        cout<<"Address:Bihar "<<endl;
        cout<<"account number is 550353520"<<endl;
        
        
    }
   
};
class account_access: public customer_details//derived class
{
    public:
    int account()
    {
        
        cout<<"account balance is 55035"<<endl;
        
    }
};
int main()
{
    account_access s;
    s.details();
    s.sbi_customer();
    s.account();

    
    return 0;
}