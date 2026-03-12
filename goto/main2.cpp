#include <iostream>
using namespace std;
int main() 
{
    int a = 1;
    x: 
    cout<<a<<endl;
    a++;

    if (a<= 10)
    {
        goto x;
    }
    return 0;
}