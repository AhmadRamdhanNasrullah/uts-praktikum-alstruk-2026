# 2503010050 - MUHAMMAD_WANDI_SAPUTRA_NURHASAN

## Informasi Pribadi
- **NIM**   : 2503010050
- **Nama**  : MUHAMMAD_WANDI_SAPUTRA_NURHASAN
- **Kelas** : C

## Informasi Ujian
- **Mata Kuliah**   : Praktikum Algoritma dan Struktur Data
- **Semester**      : Genap 2025/2026
- **Media Submit**  : GitHub Pull Request
- **Bahasa**        : C++
- **IDE**           : Dev C++

---

## DAFTAR ISI
- [Soal 1](#soal-1)
- [Soal 2](#soal-2)

## ANALISIS & PEMBAHASAN SOAL

### Soal 1

1. Analisis Program
Program ini menggunakan struct Mahasiswa untuk menyimpan data:
NIM
Nama
Semester
IPK

Data mahasiswa disimpan dalam array maksimal 5 data.

Program memiliki fungsi:
Input data mahasiswa
Menampilkan data mahasiswa
Mencari IPK tertinggi
Menghitung rata-rata IPK
Mencari mahasiswa berdasarkan semester

2. Pembahasan Program
a. Struct Mahasiswa
struct Mahasiswa {
    string nim;
    string nama;
    int semester;
    float ipk;
};

Digunakan untuk mengelompokkan data mahasiswa dalam satu variabel.

b. Input Data
for(int i = 0; i < jumlah; i++)

Perulangan digunakan untuk memasukkan data mahasiswa sesuai jumlah yang diinput.

c. Menampilkan Data
cout << mhs[i].nama;

Digunakan untuk menampilkan seluruh data mahasiswa dalam bentuk tabel.

d. Mencari IPK Tertinggi
if(mhs[i].ipk > mhs[maxIndex].ipk)

Membandingkan IPK setiap mahasiswa untuk mencari nilai tertinggi.

e. Menghitung Rata-rata IPK
total += mhs[i].ipk;

Menjumlahkan semua IPK mahasiswa.

Rumus rata-rata:
Rata-rata=Jumlah Mahasiswa/Total IPK

f. Pencarian Semester
if(mhs[i].semester == cariSemester)

Digunakan untuk menampilkan mahasiswa sesuai semester yang dicari.

Jika tidak ada data:
Tidak ada mahasiswa pada semester tersebut.

3. Kesimpulan
Program berhasil menggunakan:
Struct
Array
Perulangan
Percabangan

Program dapat:
menyimpan data mahasiswa,
mencari IPK tertinggi,
menghitung rata-rata IPK,
dan mencari mahasiswa berdasarkan semester.

### Soal 2

1. Stack
Deklarasi
string stackBuku[MAX];
int top = -1;
stackBuku → menyimpan data buku
top → posisi data paling atas
Fungsi Stack
push()

Menambahkan buku ke stack.
top++;
stackBuku[top] = judul;
pop()

Menghapus buku paling atas.
top--;
peekStack()

Menampilkan buku paling atas.
stackBuku[top]

2. Queue
Deklarasi
string queueData[MAX];
int front = 0;
int rear = -1;
front → antrian depan
rear → antrian belakang
Fungsi Queue
enqueue()

Menambahkan anggota ke antrian.
rear++;
queueData[rear] = nama;
dequeue()

Menghapus anggota paling depan.
front++;
jumlah--;
peekQueue()

Menampilkan antrian depan.
queueData[front]

3. Kesimpulan
Program berhasil menerapkan:
Stack dengan konsep LIFO (Last In First Out)
Queue dengan konsep FIFO (First In First Out)

Program dapat:
menambah data,
menghapus data,
melihat data teratas/depan,
dan mengecek kondisi penuh atau kosong.

## SUMBER BELAJAR

Sebutkan sumber belajar yang digunakan, contohnya:

- Modul Praktikum Algoritma dan Struktur Data
- Video pembelajaran online (YouTube)