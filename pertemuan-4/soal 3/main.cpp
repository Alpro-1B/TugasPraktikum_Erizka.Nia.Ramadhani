#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Masukkan jumlah angka dalam deret Fibonacci: ";
    cin >> n;

    int angkaSebelumnya = 0;
    int angkaSaatIni = 1;

    cout << "Deret Fibonacci: ";

    for (int i = 0; i < n; i++) {
        cout << angkaSebelumnya << " "; // Cetak angka sebelumnya

        int angkaSelanjutnya = angkaSebelumnya + angkaSaatIni; // Hitung angka selanjutnya dalam deret Fibonacci
        angkaSebelumnya = angkaSaatIni; // Geser angka sebelumnya menjadi angka saat ini
        angkaSaatIni = angkaSelanjutnya; // Geser angka saat ini menjadi angka selanjutnya
    }

    cout << endl;

    return 0;
}
