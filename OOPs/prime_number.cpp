#include <iostream>
using namespace std;
class Prime
 {
private:
    int num;
public:
    void getNumber()
    {
        cout << "Enter a number: ";
        cin >> num;
    }
void checkPrime()
    {
        int count = 0;
        for(int i = 1; i <= num; i++)
        {
            if(num % i == 0)
                count++;
        }
        if(count == 2)
            cout << num << " is a Prime Number.";
        else
            cout << num << " is not a Prime Number.";
    }
};
int main()
{
    Prime p;   
    p.getNumber();
    p.checkPrime();
    return 0;
}