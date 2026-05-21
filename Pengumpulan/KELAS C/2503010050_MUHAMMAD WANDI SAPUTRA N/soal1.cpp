#include<iostream>
#include<iomanip>
using namespace std;

struct Mahasiswa {
    string nim;
    string nama;
    int semester;
    float ipk;
};

int main() {
    Mahasiswa mhs[5];
    int jumlah;

    cout << "Jumlah Mahasiswa (1-5): ";
    cin >> jumlah;

    // Input data
    for(int i = 0; i < jumlah; i++) {
        cout << "\nData Mahasiswa ke-" << i + 1 << endl;

        cout << "NIM       : ";
        cin >> mhs[i].nim;

        cin.ignore();

        cout << "Nama      : ";
        getline(cin, mhs[i].nama);

        cout << "Semester  : ";
        cin >> mhs[i].semester;

        cout << "IPK       : ";
        cin >> mhs[i].ipk;
    }

    // Tampilkan data
    cout << "\nData Mahasiswa\n";
    cout << "-------------------------------------------------------------\n";
    cout << "No|    NIM    |          Nama          | Semester | IPK \n";
    cout << "-------------------------------------------------------------\n";

    for(int i = 0; i < jumlah; i++) {
        cout << i + 1 << " | "
             << mhs[i].nim << " | "
             << mhs[i].nama << " | "
             << mhs[i].semester << " | "
             << mhs[i].ipk << endl;
    }

    // Cari IPK tertinggi
    int maxIndex = 0;

    for(int i = 1; i < jumlah; i++) {
        if(mhs[i].ipk > mhs[maxIndex].ipk) {
            maxIndex = i;
        }
    }

    cout << "\nMahasiswa dengan IPK Tertinggi:\n";
    cout << "NIM\t\t: " << mhs[maxIndex].nim << endl;
    cout << "Nama\t\t: " << mhs[maxIndex].nama << endl;
    cout << "Semester\t: " << mhs[maxIndex].semester << endl;
    cout << "IPK\t\t: " << mhs[maxIndex].ipk << endl;

    // Hitung rata-rata IPK
    float total = 0;

    for(int i = 0; i < jumlah; i++) {
        total += mhs[i].ipk;
    }

    cout << "\nRata-rata IPK : " << total / jumlah << endl;

    // Cari berdasarkan semester
    int cariSemester;
    bool ditemukan = false;

    cout << "\nMasukkan Semester yang dicari : ";
    cin >> cariSemester;

    cout << "\nMahasiswa Semester " << cariSemester << ":\n";

    for(int i = 0; i < jumlah; i++) {
        if(mhs[i].semester == cariSemester) {
            cout << mhs[i].nama << " - " << mhs[i].nim << endl;
            ditemukan = true;
        }
    }

    if(!ditemukan) {
        cout << "Tidak ada mahasiswa pada semester tersebut.\n";
    }

    return 0;
}