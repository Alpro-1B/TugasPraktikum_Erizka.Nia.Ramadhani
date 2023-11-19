#include <iostream>

using namespace std;

// Fungsi untuk memeriksa apakah sebuah bilangan prima
int isPrima(int angka) {
    if (angka <= 1) {
        return false;
    }
    for (int i = 2; i * i <= angka; i++) {
        if (angka % i == 0) {
            return false;
        }
    }
    return true;
}

// Fungsi untuk mencari faktor-faktor dari sebuah bilangan
int faktorBilangan(int angka) {
    for (int i = 1; i <= angka; i++) {
        if (angka % i == 0) {

        }
    }
    return true;
}

// Fungsi untuk tidak menampilkan nilai kosong
void tampilkanBilanganGanjilGenapPrima(int batas) {
    int jumlahGanjil = 0; //deklarasi dan inisialisasi variabel
    int jumlahGenap = 0; //deklarasi dan inisialisasi variabel
    int jumlahPrima = 0; //deklarasi dan inisialisasi variabel

    cout <<endl;

    //bagian Bilangan Ganjil
    cout << "Bilangan Ganjil: ";
    //loop semua bilangan yang di input ke user agar dapat di olah sehingga mendapatkan nilai bilangan ganjil
    for (int i = 1; i <= batas; i++) {
    //menguji apakah angkanya ganjil
        if (i % 2 == 1) {
    //menampilkan Bilangan Ganjil
            cout << i << " ";
            jumlahGanjil++;
        }
    }

    //bagian Bilangan Genap
    cout << "\nBilangan Genap: ";
    //loop semua bilangan yang di input ke user agar dapat di olah sehingga mendapatkan nilai bilangan genap
    for (int i = 1; i <= batas; i++) {
    //menguji apakah angkanya genap
        if (i % 2 == 0) {
    //menampilkan Bilangan Genap
            cout << i << " ";
            jumlahGenap++;
        }
    }

     //bagian Bilangan Prima
    cout << "\nBilangan Prima: ";
    //loop semua bilangan yang di input ke user agar dapat di olah sehingga mendapatkan nilai bilangan prima
    for (int i = 1; i <= batas; i++) {
        if (isPrima(i)) {
            //menampilkan Bilangan Prima
            cout << i << " ";
            jumlahPrima++;
        }
    }

    cout << "\n\nJumlah Bilangan Ganjil: " << jumlahGanjil << endl; //menampilkan Jumlah Bilangan Ganjil
    cout << "Jumlah Bilangan Genap: " << jumlahGenap << endl; //menampilkan Jumlah Bilangan Genap
    cout << "Jumlah Bilangan Prima: " << jumlahPrima << endl; //menampilkan Jumlah Bilangan Prima

    {

}

    //menampilkan jumlah deret bilangan ganjil hingga batas angka
    cout << "\nFaktor-faktor Bilangan Ganjil " << batas << ": " << faktorBilangan;
    //loop dari angka satu hingga batas angka untuk mencari faktornya
        for (int i = 1; i <= batas; i++) {
    //jika nilai jumlah bilangan ganjil dibagi angka dari 1 hingga nilai jumlah sendiri dan tidak memiliki sisa bagi maka anka pembagi merupakan faktor bilangannya
        if (i % 2 == 1) {
    //menampilkan faktor-faktornya
    cout << i << " ";
        }
}

    //menampilkan jumlah deret bilangan genap hingga batas angka
    cout << "\nFaktor-faktor Bilangan Genap " << batas << ": " << faktorBilangan;
    //loop dari angka satu hingga batas angka untuk mencari faktornya
        for (int i = 1; i <= batas; i++) {
    //jika nilai jumlah bilangan ganjil dibagi angka dari 1 hingga nilai jumlah sendiri dan tidak memiliki sisa bagi maka anka pembagi merupakan faktor bilangannya
        if (i % 2 == 1) {
    //menampilkan faktor-faktornya
    cout << i << " ";
        }
}

    //menampilkan jumlah deret bilangan prima hingga batas angka
    cout << "\nFaktor-faktor Bilangan Prima " << batas << ": " << faktorBilangan;
    //loop dari angka satu hingga batas angka untuk mencari faktornya
        for (int i = 1; i <= batas; i++) {
    //jika nilai jumlah bilangan ganjil dibagi angka dari 1 hingga nilai jumlah sendiri dan tidak memiliki sisa bagi maka anka pembagi merupakan faktor bilangannya
        if (i % 2 == 1) {
    //menampilkan faktor-faktornya
    cout << i << " ";
        }
}

}

// Fungsi untuk tidak menampilkan nilai kosong
void tampilkanSegitiga(int tinggi) {
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
}

// Fungsi untuk tidak menampilkan nilai kosong
void tampilkanDeretFibonacci(int n) {
    int angkaSebelumnya = 0;  //deklarasi variabel
    int angkaSaatIni = 1;  //deklarasi variabel

    cout << "Deret Fibonacci: ";

    //looping digunakan untuk membuat deret dan suku-sukunya
    for (int i = 0; i < n; i++) {
        cout << angkaSebelumnya << " "; // Cetak angka sebelumnya

        int angkaSelanjutnya = angkaSebelumnya + angkaSaatIni; // Hitung angka selanjutnya dalam deret Fibonacci
        angkaSebelumnya = angkaSaatIni; // Geser angka sebelumnya menjadi angka saat ini
        angkaSaatIni = angkaSelanjutnya; // Geser angka saat ini menjadi angka selanjutnya
    }

    cout << endl;
}

int main() {
    int pilihan;
    cout << "           WELCOME TO THE PROGRAM                ";
    cout << endl << endl;
    cout << "Silahkan pilih opsi yang ingin di tampilkan:\n" << endl;
    // menampilkan opsi yang akan di pilih
    cout << "1. Tampilkan Bilangan Ganjil, Genap, dan Prima\n";
    cout << "2. Tampilkan Segitiga\n";
    cout << "3. Tampilkan Deret Fibonacci\n" << endl;
    // meminta input pilihan kepada user
    cout << "Masukkan pilihan (1/2/3): ";
    cin >> pilihan;

    cout << endl;

    //fungsi untuk mengeksekusi pilihan
    switch (pilihan) {
        case 1: {
            int batas;
            //meminta batas bilangan yang ingin di ketahuai kepada user
            cout << "Masukkan batas untuk Bilangan Ganjil, Genap, dan Prima: ";
            cin >> batas;
            tampilkanBilanganGanjilGenapPrima(batas);
            break;
            cout << endl;
        }
        case 2: {
            int tinggi;
            //meminta input tinggi yang dinginkan kepada user
            cout << "Masukkan tinggi segitiga: ";
            cin >> tinggi;
            tampilkanSegitiga(tinggi);
            break;
        }
        case 3: {
            int n;
            //meminta input jumlah angka yang di inginkan kepada user
            cout << "Masukkan jumlah angka dalam deret Fibonacci: ";
            cin >> n;
            tampilkanDeretFibonacci(n);
            break;

        }
        default:
            //menampilkan opsi tidak valid jika memasukkan pilihan tidak sesuai
            cout << "Opsi tidak valid.\n";
    }

    return 0;
}
