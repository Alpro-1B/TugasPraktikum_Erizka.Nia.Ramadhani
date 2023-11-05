#include <iostream>

using namespace std;

int main() {
    int n;
//meminta input angka yangdi inginkan kepada user
    cout << "Masukkan jumlah angka dalam deret Fibonacci: ";
    cin >> n;

    int angkaSebelumnya = 0; //deklarasi variabel
    int angkaSaatIni = 1; //deklarasi variabel

    cout << "Deret Fibonacci: ";

//looping digunakan untuk membuat deret dan suku-sukunya
    for (int i = 0; i < n; i++) {
        cout << angkaSebelumnya << " "; // Cetak angka sebelumnya

        int angkaSelanjutnya = angkaSebelumnya + angkaSaatIni; // Hitung angka selanjutnya dalam deret Fibonacci
        angkaSebelumnya = angkaSaatIni; // Geser angka sebelumnya menjadi angka saat ini
        angkaSaatIni = angkaSelanjutnya; // Geser angka saat ini menjadi angka selanjutnya
    }

    cout << endl;

    return 0;
}
