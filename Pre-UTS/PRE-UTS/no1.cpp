#include <iostream>
using namespace std;

int main() 
{
    int angka[5];

    cout << "input 5 angka (pisahkan dengan spasi): ";
    for(int i = 0; i < 5; i++) {
        cin >> angka[i];
    }

    cout << "Hasil dibalik: ";
    for(int i = 4; i >= 0; i--) {
        cout << angka[i] << " ";
    }

    return 0;
}