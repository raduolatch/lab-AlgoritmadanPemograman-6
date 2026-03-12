#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"input a number: ";
    cin>>a;
    cout<<"input b number: ";
    cin>>b;
    for(int i= a ; i<= 5; i++)
    {
        for (int j= b; j<= 5; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}