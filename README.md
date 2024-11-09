# Faktorial C++

Program ini adalah implementasi dalam bahasa C++ untuk menghitung faktorial dari sebuah bilangan yang dimasukkan oleh pengguna.

## Fitur

- Pengguna dapat memasukkan angka yang ingin dihitung faktorialnya.
- Validasi untuk memastikan angka non-negatif.
- Menggunakan fungsi `void` untuk menghitung dan mencetak hasil faktorial.

## Struktur Proyek

- `main.cpp`: Berisi kode utama program.

## Kode Program

```cpp
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
```

## Cara Penggunaan

### 1. Clone repositori

```
https://github.com/RobbyDarmawann/Faktorial-cpp.git
cd faktorial-cpp
```

### 2. Kompilasi dan Jalankan

Untuk mengompilasi kode:

```bash
g++ main.cpp -o main
```

Kemudian jalankan dengan:

```bash
./main
```

### 3. Contoh Penggunaan

Setelah program berjalan, Anda akan diminta memasukkan angka. Masukkan angka yang ingin dihitung faktorialnya, misalnya `5`.

**Contoh Output:**

```
Masukkan angka yang akan dihitung faktorialnya: 5
Faktorial dari 5 adalah: 120
```

## Kontribusi

1. Fork repositori ini.
2. Buat branch baru untuk fitur atau perbaikan (`git checkout -b fitur-baru`).
3. Commit perubahan (`git commit -m 'Menambahkan fitur baru'`).
4. Push ke branch (`git push origin fitur-baru`).
5. Buat pull request.
