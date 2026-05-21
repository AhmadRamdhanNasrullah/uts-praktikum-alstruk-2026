#include <iostream>
#include <string>
using namespace std;

struct Buku{
	string judul;
	string pengarang;
	int tahunTerbit;
	float harga;
};

int main(){
	Buku daftarBuku[5];
	int n;
	
	cout << "Masukan jumlah buku (1-5): ";
	cin >> n;
	
	if(n < 1 || n > 5){
		cout << "Jumlah tidak valid!" << endl;
	}
	
	for (int i = 0; i < n; i++){
		cout << "\nData Buku ke-" << i + 1 << endl;
		cin.ignore();
		cout << "Judul			: "; getline(cin, daftarBuku[i].judul);
		cout << "Pengarang  	: "; getline(cin, daftarBuku[i].pengarang);
        cout << "Tahun Terbit	: "; cin >> daftarBuku[i].tahunTerbit;
        cout << "Harga			: "; cin >> daftarBuku[i].harga;
	}
	
	  // Menampilkan header dengan spasi manual
    cout << "\nNo | Judul                | Pengarang      | Tahun | Harga" << endl;
    cout << "------------------------------------------------------------" << endl;

    float totalHarga = 0;
    int indexTertinggi = 0;

    for (int i = 0; i < n; i++) {
        // Menampilkan data dengan pemisah garis tegak
        cout << i + 1 << "  | " 
             << daftarBuku[i].judul << " | " 
             << daftarBuku[i].pengarang << " | " 
             << daftarBuku[i].tahunTerbit << " | " 
             << daftarBuku[i].harga << endl;

        totalHarga += daftarBuku[i].harga;

        if (daftarBuku[i].harga > daftarBuku[indexTertinggi].harga) {
            indexTertinggi = i;
        }
    }

    cout << "\nBuku dengan harga tertinggi: " << daftarBuku[indexTertinggi].judul << endl;
    cout << "Rata-rata harga seluruh buku: " << totalHarga / n << endl;

    return 0;
}
