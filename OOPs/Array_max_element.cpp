#include <iostream>
using namespace std;
class MAX
{
    int arr[5];
public:
    void input()
    {
        cout << "Enter 5 elements: ";
        for(int i = 0; i < 5; i++)
        {
            cin >> arr[i];
        }
    }
     void findMax()
    {
        int max = arr[0];
        for(int i = 1; i < 5; i++)
        {
            if(arr[i] > max)
            {
                max = arr[i];
            }
        }
         cout << "Maximum element = " << max;
    }
};
int main()
{
    MAX AP;   
    AP.input();
    AP.findMax();
    return 0;
}