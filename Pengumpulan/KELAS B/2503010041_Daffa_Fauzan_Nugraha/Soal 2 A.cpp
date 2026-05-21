#include <iostream>
#include <string>

using namespace std;

#define MAX 5

struct Stack {
    int top = -1;
    string data[MAX]; // Menggunakan string untuk format T001

    bool isFull() { return top == MAX - 1; }
    bool isEmpty() { return top == -1; }

    void push(string noTransaksi) {
        if (isFull()) {
            cout << "Stack Penuh! Tidak bisa push " << noTransaksi << endl;
        } else {
            data[++top] = noTransaksi;
            cout << "Push Berhasil: " << noTransaksi << endl;
        }
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack Kosong! Tidak ada yang bisa di-pop." << endl;
        } else {
            cout << "Pop Berhasil: " << data[top--] << endl;
        }
    }

    void peek() {
        if (!isEmpty()) {
            cout << "Transaksi teratas: " << data[top] << endl;
        } else {
            cout << "Stack Kosong." << endl;
        }
    }

    void display() {
        cout << "Isi Stack: ";
        for (int i = 0; i <= top; i++) cout << "[" << data[i] << "] ";
        cout << endl;
    }
};

int main() {
    Stack s;
    // Simulasi Skenario
    s.push("T001");
    s.push("T002");
    s.push("T003");
    s.push("T004");
    s.peek();
    s.pop();
    s.pop();
    s.display();
    return 0;
}
