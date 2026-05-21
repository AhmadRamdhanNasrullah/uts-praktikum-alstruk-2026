#include <iostream>
#include <iomanip>
using namespace std;

// Struct Buku
struct Buku {
    string judul;
    string pengarang;
    int tahunTerbit;
    float harga;
};

int main() {
    Buku buku[5];
    int jumlah;

    // Input jumlah buku
    cout << "Masukkan jumlah buku (1-5): ";
    cin >> jumlah;
    cin.ignore();

    // Input data buku
    for (int i = 0; i < jumlah; i++) {
        cout << "\nData Buku ke-" << i + 1 << endl;

        cout << "Judul : ";
        getline(cin, buku[i].judul);

        cout << "Pengarang : ";
        getline(cin, buku[i].pengarang);

        cout << "Tahun Terbit : ";
        cin >> buku[i].tahunTerbit;

        cout << "Harga : ";
        cin >> buku[i].harga;
        cin.ignore();
    }

    // Tampilkan data buku
    cout << "\n===== DATA BUKU =====\n";

    cout << left << setw(5) << "No"
         << setw(25) << "Judul"
         << setw(20) << "Pengarang"
         << setw(10) << "Tahun"
         << setw(10) << "Harga" << endl;

    for (int i = 0; i < jumlah; i++) {
        cout << left << setw(5) << i + 1
             << setw(25) << buku[i].judul
             << setw(20) << buku[i].pengarang
             << setw(10) << buku[i].tahunTerbit
             << setw(10) << fixed << setprecision(2) << buku[i].harga
             << endl;
    }

    // Cari harga tertinggi
    int maxIndex = 0;

    for (int i = 1; i < jumlah; i++) {
        if (buku[i].harga > buku[maxIndex].harga) {
            maxIndex = i;
        }
    }

    cout << "\n===== BUKU DENGAN HARGA TERTINGGI =====\n";
    cout << "Judul : " << buku[maxIndex].judul << endl;
    cout << "Pengarang : " << buku[maxIndex].pengarang << endl;
    cout << "Tahun Terbit : " << buku[maxIndex].tahunTerbit << endl;
    cout << "Harga : " << buku[maxIndex].harga << endl;

    // Hitung rata-rata harga
    float total = 0;

    for (int i = 0; i < jumlah; i++) {
        total += buku[i].harga;
    }

    float rata = total / jumlah;

    cout << "\nRata-rata harga buku : " << rata << endl;

    // Cari berdasarkan tahun
    int tahunCari;
    bool ditemukan = false;

    cout << "\nMasukkan tahun yang dicari : ";
    cin >> tahunCari;

    cout << "\n===== HASIL PENCARIAN =====\n";

    for (int i = 0; i < jumlah; i++) {
        if (buku[i].tahunTerbit == tahunCari) {
            cout << "Judul : " << buku[i].judul << endl;
            cout << "Pengarang : " << buku[i].pengarang << endl;
            cout << "Harga : " << buku[i].harga << endl;
            cout << "----------------------\n";
            ditemukan = true;
        }
    }

    if (!ditemukan) {
        cout << "Tidak ada buku yang terbit pada tahun tersebut." << endl;
    }

    return 0;
}
