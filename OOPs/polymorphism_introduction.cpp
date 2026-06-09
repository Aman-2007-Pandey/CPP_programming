#include <iostream>
using namespace std;

class Sum
{
public:
    void add(int a, int b)
    {
        cout << "Sum = " << a + b << endl;
    }
    void add(int a, int b, int c)
    {
        cout << "Sum = " << a + b + c << endl;
    }
};
int main()
{
    Sum s;
    s.add(5, 10);
    s.add(5, 10, 15);
    return 0;
}