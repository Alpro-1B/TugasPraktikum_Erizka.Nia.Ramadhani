//Dengan menggunakan variabel tambahan:
#include <iostream>

int main() {
    int firstValue = 10;
    int secondValue = 8;
    int temp; // Variabel tambahan

    std::cout << "Nilai firstValue sebelum di tukar " << firstValue<< std::endl;
    std::cout << "Nilai secondValue sebelum di tukar " << secondValue<< std::endl;
    // Menukar nilai
    temp = firstValue;
    firstValue = secondValue;
    secondValue = temp;
    std::cout << "\nSetelah pertukaran, \nfirstValue = " << firstValue << " dan secondValue = " << secondValue << std::endl;

    return 0;
}
