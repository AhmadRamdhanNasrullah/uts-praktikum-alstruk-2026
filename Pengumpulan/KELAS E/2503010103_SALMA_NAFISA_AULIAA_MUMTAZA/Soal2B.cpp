#include <iostream>
using namespace std;

const int MAX = 5;

string dataQueue[MAX];
int front = -1;
int rear = -1;

// Cek kosong
bool isEmpty() {
    return front == -1;
}

// Cek penuh
bool isFull() {
    return rear == MAX - 1;
}

// Enqueue
void enqueue(string nama) {
    if (isFull()) {
        cout << "Queue penuh!" << endl;
    } else {

        if (isEmpty()) {
            front = 0;
        }

        rear++;
        dataQueue[rear] = nama;

        cout << nama << " masuk ke antrian." << endl;
    }
}

// Dequeue
void dequeue() {
    if (isEmpty()) {
        cout << "Queue kosong!" << endl;
    } else {

        cout << dataQueue[front] << " keluar dari antrian." << endl;

        if (front == rear) {
            front = rear = -1;
        } else {
            front++;
        }
    }
}

// Peek
void peek() {
    if (isEmpty()) {
        cout << "Queue kosong!" << endl;
    } else {
        cout << "Pelanggan terdepan : " << dataQueue[front] << endl;
    }
}

// Tampilkan queue
void tampil() {
    if (isEmpty()) {
        cout << "Queue kosong!" << endl;
    } else {

        cout << "\nIsi Queue :" << endl;

        for (int i = front; i <= rear; i++) {
            cout << dataQueue[i] << endl;
        }
    }
}

int main() {

    enqueue("Budi");
    enqueue("Sari");
    enqueue("Eko");

    tampil();

    peek();

    dequeue();

    tampil();

    enqueue("Dewi");

    tampil();

    return 0;
}
