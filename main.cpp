#include <iostream>
using namespace std;

void faktorial(int n) {
    int hasil = 1;
    for (int i = 1; i <= n; i++) {
        hasil *= i;
    }
    cout << "Faktorial dari " << n << " adalah: " << hasil << endl;
}

int main() {
    int num;
    cout << "Masukkan angka yang akan dihitung faktorialnya: ";
    cin >> num;

    if (num < 0) {
        cout << "Faktorial hanya bisa dihitung untuk bilangan non-negatif." << endl;
    } else {
        faktorial(num);
    }
    
    return 0;
}
