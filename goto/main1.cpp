#include <iostream>
using namespace std;
int main() 
{
    goto a;

    b:
    cout << "laboratorium ";
    goto c;

    a:
    cout<<"ilmu komputer ";
    goto b;

    c:
    cout<<"komputer ";
    return 0;
}