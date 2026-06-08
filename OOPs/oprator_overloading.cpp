#include<iostream>
using namespace std;
class youtube
{
    private:
    int subscribers;
    public:
    youtube(int s)
    {
        subscribers = s;
    }
    void operator ++()
    {
         subscribers ++;
    }
    int display()
    {
        cout<<"subscribers are"<<subscribers;
    }
};
int main()
{
    youtube y(100);
    ++y;
    y.display();
    return 0;
}

