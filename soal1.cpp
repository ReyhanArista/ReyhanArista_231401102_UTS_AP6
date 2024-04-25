#include <iostream>
using namespace std;
int main() {
    int baris, num = 0;

    cout << "Masukkan baris : ";
    cin >> baris;

    for(int i = 1; i <= baris; i++) {
        for(int j = 1; j <= i; j++) {
            num++;
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}