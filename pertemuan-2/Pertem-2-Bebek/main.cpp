#include <iostream>

int main() {
    int N, M;

    // Masukkan jumlah bebek (N) dan jumlah teman (M)
    std::cout << "Masukkan jumlah bebek (N): ";
    std::cin >> N;
    std::cout << "Masukkan jumlah teman (M): ";
    std::cin >> M;

    // Hitung berapa ekor bebek per teman dan sisa bebek
    int bebekPerTeman = N / M;
    int sisaBebek = N % M;

    // Tampilkan hasilnya
    std::cout << "Pak Tatang dapat memberikan " << bebekPerTeman << " ekor bebek kepada setiap teman." << std::endl;
    std::cout << "Sisa bebek yang tidak terbagi adalah " << sisaBebek << " ekor." << std::endl;

    return 0;
}
