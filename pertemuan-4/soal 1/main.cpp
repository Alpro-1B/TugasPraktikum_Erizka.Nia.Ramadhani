#include <iostream>


using namespace std;

// Fungsi untuk memeriksa apakah sebuah bilangan prima
bool isPrima(int angka) {
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
bool faktorBilangan(int angka) {
    for (int i = 1; i <= angka; i++) {
        if (angka % i == 0) {

        }
    }
    return true;
}


int main() {
    int batas;
    cout << "Masukkan batas: ";
    //meminta batas bilangan yang ingin di ketahuai kepada user
    cin >> batas;

    int jumlahGanjil = 0; //deklarasi dan inisialisasi variabel
    int jumlahGenap = 0; //deklarasi dan inisialisasi variabel
    int jumlahPrima = 0; //deklarasi dan inisialisasi variabel

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

//bagian bilangan prima
    cout << "\nBilangan Prima: ";
//loop semua bilangan yang di input ke user agar dapat di olah sehingga mendapatkan nilai bilangan prima
    for (int i = 1; i <= batas; i++) {
        if (isPrima(i)) {
//menampilkan Bilangan Prima
            cout << i << " ";
            jumlahPrima++;
        }
    }

//menampilkan Jumlah Bilangan Ganjil
    cout << "\n\nJumlah Bilangan Ganjil: " << jumlahGanjil << endl;
//menampilkan Jumlah Bilangan Genap
    cout << "Jumlah Bilangan Genap: " << jumlahGenap << endl;
//menampilkan Jumlah Bilangan Prima
    cout << "Jumlah Bilangan Prima: " << jumlahPrima << endl;
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



    return 0;
}
