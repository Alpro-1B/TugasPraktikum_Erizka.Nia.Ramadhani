#include <iostream>

using namespace std;

int main() {
    int tinggi;
    cout << "Masukkan tinggi segitiga: ";
    cin >> tinggi;

    for (int i = 0; i < tinggi; i++) {
        // Membuat spasi untuk ratakan segitiga
        for (int j = 0; j < tinggi - i - 1; j++) {
            cout << " ";
        }
        // Mencetak bintang untuk membentuk segitiga
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
