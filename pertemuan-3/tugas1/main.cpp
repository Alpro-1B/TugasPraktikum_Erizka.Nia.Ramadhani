#include <iostream>

using namespace std;

int main()
{
     string nama, npm;
     int score;

    //meminta input nama, npm, dan score kepada user
    std::cout << "Masukkan nama: ";
    std::cin >> nama;
    std::cout << "Masukkan npm: ";
    std::cin >> npm;
    std::cout << "Masukkan nilai score: ";
    std::cin >> score;

    //klasifikasi score
    //jika score lebih dari 90 atau lebih dari sama dengan 100
    if (score >= 90) {
        //tampilkan nilai A
        std::cout << "Selamat! Anda mendapatkan nilai A." << std::endl;
    //jika score lebih dari atau sama dengan 80 dan score kurang dari atau sama dengan 89
    } else if (score >= 80 && score <= 89) {
        //tampilkan nilai B
        std::cout << "Anda mendapatkan nilai B." << std::endl;
    //jika score lebih dari atau sama dengan 70 dan score kurang dari atau sama dengan 79
    } else if (score >= 70 && score <= 79) {
        //tampilkan nilai C
        std::cout << "Anda mendapatkan nilai C." << std::endl;
    //jika score lebih dari atau sama dengan 60 dan score kurang dari atau sama dengan 69
    } else if (score >= 60 && score <= 69) {
        //tampilkan nilai D
        std::cout << "Anda mendapatkan nilai D." << std::endl;
    //jika score kurang dari atau sama dengan 60 dan score sama dengan 0
    } else {
        //tampilkan nilai E
        std::cout << "Anda mendapatkan nilai E." << std::endl;
    }
    return 0;
}
