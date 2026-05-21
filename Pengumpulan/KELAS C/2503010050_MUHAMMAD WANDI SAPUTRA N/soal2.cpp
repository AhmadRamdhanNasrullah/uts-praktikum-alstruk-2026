#include <iostream>
using namespace std;

const int MAX = 5;

//
// STACK
//

string stackBuku[MAX];
int top = -1;

// stack kosong
bool isEmptyStack() {
    return top == -1;
}

// stack penuh
bool isFullStack() {
    return top == MAX - 1;
}

// push
void push(string judul) {
    if(isFullStack()) {
        cout << "Stack penuh!\n";
    } else {
        top++;
        stackBuku[top] = judul;
        cout << "Push: " << judul << endl;
    }
}

// pop
void pop() {
    if(isEmptyStack()) {
        cout << "Stack kosong!\n";
    } else {
        cout << "Pop: " << stackBuku[top] << endl;
        top--;
    }
}

// peek stack
void peekStack() {
    if(isEmptyStack()) {
        cout << "Stack kosong!\n";
    } else {
        cout << "Buku teratas: " << stackBuku[top] << endl;
    }
}

// tampil stack
void tampilStack() {
    if(isEmptyStack()) {
        cout << "Stack kosong!\n";
    } else {
        cout << "\nIsi Stack:\n";
        for(int i = top; i >= 0; i--) {
            cout << stackBuku[i] << endl;
        }
    }
}

//
// QUEUE
//

string queueData[MAX];
int front = 0;
int rear = -1;
int jumlah = 0;

// queue kosong
bool isEmptyQueue() {
    return jumlah == 0;
}

// queue penuh
bool isFullQueue() {
    return jumlah == MAX;
}

// tampil queue
void tampilQueue() {
    if(isEmptyQueue()) {
        cout << "Queue kosong!\n";
    } else {
        cout << "Isi Queue: ";
        for(int i = front; i <= rear; i++) {
            cout << queueData[i] << " ";
        }
        cout << endl;
    }
}

// enqueue
void enqueue(string nama) {
    if(isFullQueue()) {
        cout << "Queue penuh!\n";
    } else {
        rear++;
        queueData[rear] = nama;
        jumlah++;

        cout << "Enqueue: " << nama << endl;
        tampilQueue();
    }
}

// dequeue
void dequeue() {
    if(isEmptyQueue()) {
        cout << "Queue kosong!\n";
    } else {
        cout << "Dequeue: " << queueData[front] << endl;
        front++;
        jumlah--;

        tampilQueue();
    }
}

// peek queue
void peekQueue() {
    if(isEmptyQueue()) {
        cout << "Queue kosong!\n";
    } else {
        cout << "Antrian depan: " << queueData[front] << endl;
    }
}

//
// MAIN
//

int main() {

    cout << "===== STACK BUKU =====\n";

    push("Fisika Dasar");
    push("Kalkulus");
    push("Algoritma");
    push("Jaringan");

    cout << endl;
    peekStack();

    cout << endl;
    pop();
    pop();

    tampilStack();

    cout << "\n\n===== QUEUE PEMINJAMAN =====\n";

    enqueue("Reza");
    enqueue("Mia");
    enqueue("Hendra");

    cout << endl;
    peekQueue();

    cout << endl;
    dequeue();

    cout << endl;
    enqueue("Putri");

    return 0;
}