#include <iostream>

using namespace std;

int main()
{
    int pilihan;
    double luas;

    //meminta input pilihan bangun datar
    cout << "Pilih bangun datar:\n";
    cout << "1. Persegi\n";
    cout << "2. Persegi Panjang\n";
    cout << "3. Segitiga\n";
    cout << "Masukkan pilihan (1/2/3): ";
    cin >> pilihan;

    //proses pengkondisian dari hasil pilihna
    switch (pilihan) {
        //jika pilihan 1, maka bangun datar adalah persegi
        case 1:
            double sisi;
            //input nilai sisi
            cout << "Masukkan panjang sisi persegi: ";
            cin >> sisi;
            luas = sisi * sisi;
            //menampilkan hasil perhitugan
            cout << "Luas persegi adalah: " << luas << endl;
            break;
        //jika pilihan 2, maka bangun datar adalah persegi panjang
        case 2:
            double panjang, lebar;
            //input nilai panjang
            cout << "Masukkan panjang persegi panjang: ";
            cin >> panjang;
            //input nilai lebar
            cout << "Masukkan lebar persegi panjang: ";
            cin >> lebar;
            luas = panjang * lebar;
            //menampilkan hasil perhitungan
            cout << "Luas persegi panjang adalah: " << luas << endl;
            break;
        //jika pilihan 3, maka bangun datar adalah segituga
        case 3:
            double alas, tinggi;
            //input nilai alas
            cout << "Masukkan alas segitiga: ";
            cin >> alas;
            //input nilai tinggi
            cout << "Masukkan tinggi segitiga: ";
            cin >> tinggi;
            luas = 0.5 * alas * tinggi;
            cout << "Luas segitiga adalah: " << luas << endl;
            break;
        //jika pilihan selain 1,2, dan 3, maka tampilkan
        default:
            cout << "Pilihan tidak valid." << endl;
            break;
    }

    return 0;
}
