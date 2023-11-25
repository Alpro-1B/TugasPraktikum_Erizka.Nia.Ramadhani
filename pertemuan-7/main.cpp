#include <iostream>
#include <algorithm> // Untuk menggunakan fungsi std::sort

using namespace std;

int main() {
    cout << "============================WELCOME TO THE PROGRAM TO FIND THE HIGHEST SCORE================================\n";
    cout << endl;
    // jumlah ukuran array dalam program
    const int ukuranArray = 5;
    int nilai[ukuranArray];

    // Memasukkan nilai ke dalam array
    cout << "Silahkan masukkan " << ukuranArray << " nilai ke dalam array:\n";
    for (int i = 0; i < ukuranArray; i++) {
        cout << "Nilai ke-" << i + 1 << ": ";
        cin >> nilai[i];
    }
    cout <<endl;

    // Menampilkan hasil array sebelum diurutkan
    cout << "Array sebelum diurutkan: ";
    for (int i = 0; i < ukuranArray; i++) {
        cout << nilai[i] << " ";
    }
    cout << endl;

    // Mencari nilai tertinggi
    int nilaiTertinggi = nilai[0];
    int indeksTertinggi = 0;

    for (int i = 1; i < ukuranArray; i++) {
        if (nilai[i] > nilaiTertinggi) {
            nilaiTertinggi = nilai[i];
            indeksTertinggi = i;
        }
    }
    cout << endl;

    // Menampilkan hasil
    cout << "Nilai tertinggi adalah: " << nilaiTertinggi << endl;
    cout << endl;

    // Memeriksa apakah nilai tersebut ada dalam array
    bool nilaiDitemukan = false;
    for (int i = 0; i < ukuranArray; i++) {
        if (nilai[i] == nilaiTertinggi) {
            nilaiDitemukan = true;
            break;
        }
    }

    //Jika nilai ditemukan maka tampilkan
    if (nilaiDitemukan) {
        cout << "Nilai tersebut ada dalam array sebelum di urutkan pada indeks ke-" << indeksTertinggi << endl;
        cout << endl;
    //Jika nilai tidak ditemukan maka tampilkan
    } else {
        cout << "Nilai tersebut tidak ada dalam array.\n";
        cout << endl;
    }

    // Mengurutkan array
    sort(nilai, nilai + ukuranArray);

    // Menampilkan hasil array setelah diurutkan
    cout << "Array setelah diurutkan: ";
    for (int i = 0; i < ukuranArray; i++) {
        cout << nilai[i] << " ";
    }
    cout << endl;
    cout << "=================================================THANK YOU=================================================";
    cout << endl;

    return 0;
}
