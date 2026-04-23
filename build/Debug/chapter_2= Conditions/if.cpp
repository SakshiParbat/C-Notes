//Take Positive integer input and tell if it is even or odd. (Only If Condition)

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number:";
    cin >> n;
    if(n%2==0)
    {
        cout << "Even Number";
    }
    if(n%2!=0)
    {
        cout << "Odd Number";
    }
    return 0;
}