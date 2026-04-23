//Home Work
// In b = 6.6/a+2*n; Which Operation Will Be Performed First?
//a) 6.6/a
//b) 2*n
//c) a+2
//d) Depends On The Compiler
#include <iostream>
using namespace std;
int main()
{
    int a=2;
    int n=3;
    int b = 6.6/a+2*n;
    cout<<"The Answer Is: "<<b<<endl;
    return 0;
}