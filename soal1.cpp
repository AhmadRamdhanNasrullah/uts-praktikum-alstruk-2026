#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// Deklarasi Struct Buku
struct Buku {
    string judul;
    string pengarang;
    int tahunTerbit;
    float harga;
};

int main() {
    Buku daftarBuku[5]; // Array of struct maksimal 5 data
    int jumlah;

    cout << "=== INPUT DATA BUKU ===" << endl;
    cout << "Masukkan jumlah buku (1-5): ";
    cin >> jumlah;

    if (jumlah < 1 || jumlah > 5) {
        cout << "Jumlah data tidak valid!" << endl;
        return 0;
    }

    cin.ignore();
    for (int i = 0; i < jumlah; i++) {
        cout << "\nData Buku ke-" << i + 1 << endl;
        cout << "Judul         : ";
        getline(cin, daftarBuku[i].judul);
        cout << "Pengarang     : ";
        getline(cin, daftarBuku[i].pengarang);
        cout << "Tahun Terbit  : ";
        cin >> daftarBuku[i].tahunTerbit;
        cout << "Harga         : ";
        cin >> daftarBuku[i].harga;
        cin.ignore();
    }

    // Menampilkan format tabel
    cout << "\n=======================================================\n";
    cout << "No | Judul             | Pengarang      | Tahun | Harga\n";
    cout << "---|-------------------|----------------|-------|-------\n";
    for (int i = 0; i < jumlah; i++) {
        cout << left << setw(2) << (i + 1) << " | "
             << setw(17) << daftarBuku[i].judul << " | "
             << setw(14) << daftarBuku[i].pengarang << " | "
             << setw(5) << daftarBuku[i].tahunTerbit << " | "
             << fixed << setprecision(2) << daftarBuku[i].harga << endl;
    }
    cout << "=======================================================\n";

    // Mencari harga tertinggi
    float hargaTertinggi = daftarBuku[0].harga;
    int indeksTertinggi = 0;
    float totalHarga = 0;

    for (int i = 0; i < jumlah; i++) {
        totalHarga += daftarBuku[i].harga;
        if (daftarBuku[i].harga > hargaTertinggi) {
            hargaTertinggi = daftarBuku[i].harga;
            indeksTertinggi = i;
        }
    }

    cout << "\n=== BUKU DENGAN HARGA TERTINGGI ===" << endl;
    cout << "Judul        : " << daftarBuku[indeksTertinggi].judul << endl;
    cout << "Pengarang    : " << daftarBuku[indeksTertinggi].pengarang << endl;
    cout << "Tahun Terbit : " << daftarBuku[indeksTertinggi].tahunTerbit << endl;
    cout << "Harga        : " << daftarBuku[indeksTertinggi].harga << endl;

    float rataRata = totalHarga / jumlah;
    cout << "\nRata-rata harga seluruh buku: " << fixed << setprecision(2) << rataRata << endl;

    int cariTahun;
    bool ditemukan = false;
    cout << "\nMasukkan tahun terbit yang dicari: ";
    cin >> cariTahun;

    cout << "\nHasil pencarian buku terbit tahun " << cariTahun << ":" << endl;
    for (int i = 0; i < jumlah; i++) {
        if (daftarBuku[i].tahunTerbit == cariTahun) {
            cout << "- " << daftarBuku[i].judul << " (" << daftarBuku[i].pengarang << ")" << endl;
            ditemukan = true;
        }
    }

    if (!ditemukan) {
        cout << "Tidak ada buku yang terbit pada tahun tersebut." << endl;
    }

    return 0;
}
