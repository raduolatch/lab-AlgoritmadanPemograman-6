#include <iostream>
using namespace std;

int main() 
{
    int n;

    cout << "Masukkan jumlah baris: ";
    cin >> n;

    char huruf = 'A';

    for(int i = 1; i <= n; i++) 
    {
        for(int j = 1; j <= i; j++) 
        {
            cout << huruf << " ";
        }
        cout << endl;
        huruf++; 
    }
    return 0;
}