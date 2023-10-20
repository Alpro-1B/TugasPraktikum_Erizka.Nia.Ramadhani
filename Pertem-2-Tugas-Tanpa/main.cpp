//Tanpa menggunakan variabel tambahan:
#include <iostream>

int main() {
    int firstValue = 10;
    int secondValue = 8;

    std::cout << "Nilai fristvalue = "<< firstValue << std::endl;
    std::cout << "Nilai secondValue = "<< secondValue << std::endl;

    // Menukar nilai tanpa variabel tambahan
    firstValue = firstValue + secondValue;
    secondValue = firstValue - secondValue;
    firstValue = firstValue - secondValue;

    std::cout << "Setelah pertukaran tanpa menggunakan variabel tambahan,\nfirstValue = " << firstValue << " dan secondValue = " << secondValue << std::endl;

    return 0;
}
