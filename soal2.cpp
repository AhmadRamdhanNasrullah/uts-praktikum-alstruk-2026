#include <iostream>
#include <string>

using namespace std;

// Implementasi Stack Manual
struct Stack {
    string data[5]; 
    int top = -1;

    bool isEmpty() { return top == -1; }
    bool isFull() { return top == 4; }

    void push(string noTransaksi) {
        if (isFull()) {
            cout << "[Stack] Penuh! Gagal menambahkan transaksi " << noTransaksi << endl;
        } else {
            top++;
            data[top] = noTransaksi;
            cout << "[Stack] Push sukses: " << noTransaksi << endl;
        }
    }

    void pop() {
        if (isEmpty()) {
            cout << "[Stack] Kosong! Tidak ada transaksi yang bisa di-pop." << endl;
        } else {
            cout << "[Stack] Pop sukses: " << data[top] << endl;
            top--;
        }
    }

    void peek() {
        if (isEmpty()) {
            cout << "[Stack] Kosong! Tidak ada elemen teratas." << endl;
        } else {
            cout << "[Stack] Transaksi teratas (Peek): " << data[top] << endl;
        }
    }

    void display() {
        if (isEmpty()) {
            cout << "[Stack] Isi stack kosong." << endl;
            return;
        }
        cout << "[Stack] Isi Stack saat ini: ";
        for (int i = top; i >= 0; i--) {
            cout << data[i] << " ";
        }
        cout << endl;
    }
};

// Implementasi Queue Manual
struct Queue {
    string data[5];
    int front = -1;
    int rear = -1;

    bool isEmpty() { return front == -1; }
    bool isFull() { return rear == 4; }

    void enqueue(string nama) {
        if (isFull()) {
            cout << "[Queue] Antrian Penuh! " << nama << " gagal masuk." << endl;
        } else {
            if (isEmpty()) front = 0;
            rear++;
            data[rear] = nama;
            cout << "[Queue] Enqueue sukses: " << nama << endl;
        }
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "[Queue] Antrian Kosong! Tidak ada yang bisa di-dequeue." << endl;
        } else {
            cout << "[Queue] Dequeue sukses: " << data[front] << endl;
            if (front == rear) {
                front = rear = -1; 
            } else {
                front++;
            }
        }
    }

    void peek() {
        if (isEmpty()) {
            cout << "[Queue] Antrian Kosong!" << endl;
        } else {
            cout << "[Queue] Pelanggan terdepan (Peek): " << data[front] << endl;
        }
    }

    void display() {
        if (isEmpty()) {
            cout << "[Queue] Isi antrian kosong." << endl;
            return;
        }
        cout << "[Queue] Isi Antrian saat ini: ";
        for (int i = front; i <= rear; i++) {
            cout << data[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    cout << "=== SIMULASI STACK (RIWAYAT TRANSAKSI) ===" << endl;
    Stack riwayat;
    riwayat.push("T001");
    riwayat.push("T002");
    riwayat.push("T003");
    riwayat.push("T004");
    riwayat.peek();
    riwayat.pop();
    riwayat.pop();
    riwayat.display();

    cout << "\n============================================\n\n";

    cout << "=== SIMULASI QUEUE (ANTRIAN PELANGGAN) ===" << endl;
    Queue antrian;
    antrian.enqueue("Budi");
    antrian.enqueue("Sari");
    antrian.enqueue("Eko");
    antrian.peek();
    antrian.dequeue();
    antrian.display();
    antrian.enqueue("Dewi");
    antrian.display();

    return 0;
}
