#include <iostream>
using namespace std;

const int MAX = 5;

string dataStack[MAX];
int top = -1;

// Cek kosong
bool isEmpty() {
    return top == -1;
}

// Cek penuh
bool isFull() {
    return top == MAX - 1;
}

// Push
void push(string noTransaksi) {
    if (isFull()) {
        cout << "Stack penuh!" << endl;
    } else {
        top++;
        dataStack[top] = noTransaksi;
        cout << noTransaksi << " berhasil ditambahkan." << endl;
    }
}

// Pop
void pop() {
    if (isEmpty()) {
        cout << "Stack kosong!" << endl;
    } else {
        cout << "data yang dihapus : " << dataStack[top] << endl;
        top--;
    }
}

// Peek
void peek() {
    if (isEmpty()) {
        cout << "Stack kosong!" << endl;
    } else {
        cout << "Data teratas : " << dataStack[top] << endl;
    }
}

// Tampil stack
void tampil() {
    if (isEmpty()) {
        cout << "Stack kosong!" << endl;
    } else {
        cout << "\nIsi Stack :" << endl;

        for (int i = top; i >= 0; i--) {
            cout << dataStack[i] << endl;
        }
    }
}

int main() {

    push("T001");
    push("T002");
    push("T003");
    push("T004");

    peek();

    pop();
    pop();

    tampil();

    return 0;
}
