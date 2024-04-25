#include <iostream>
using namespace std;

int main() {
    int angka, sisa, jumlah = 0;

   
    cout << "Masukkan sebuah angka (tidak negatif): ";
    cin >> angka;

    
    if (angka < 0) {
        cout << "Angka tidak boleh negatif!" << endl;
        return 1; 
    }

    int tAngka = angka; 
    while (tAngka > 0) {
        sisa = tAngka % 10; 
        jumlah += sisa; 
        tAngka /= 10; 
    }

    
    cout << "input : " << angka <<endl;
    cout << "output : " << jumlah << endl;

    return 0;
}
