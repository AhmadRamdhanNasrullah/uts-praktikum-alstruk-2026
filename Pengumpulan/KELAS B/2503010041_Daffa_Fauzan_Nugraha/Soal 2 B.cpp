#include <iostream>
#include <string>

using namespace std;

#define MAX 5

struct Queue {
    int front = -1, rear = -1;
    string data[MAX];

    bool isFull() { return rear == MAX - 1; }
    bool isEmpty() { return front == -1 || front > rear; }

    void enqueue(string nama) {
        if (isFull()) {
            cout << "Queue Penuh! " << nama << " tidak bisa masuk." << endl;
        } else {
            if (front == -1) front = 0;
            data[++rear] = nama;
            cout << "Enqueue: " << nama << endl;
        }
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue Kosong!" << endl;
        } else {
            cout << "Dequeue: " << data[front++] << endl;
        }
    }

    void peek() {
        if (!isEmpty()) cout << "Pelanggan terdepan: " << data[front] << endl;
    }

    void display() {
        cout << "Isi Queue: ";
        if (isEmpty()) cout << "(Kosong)";
        for (int i = front; i <= rear && i != -1; i++) cout << "[" << data[i] << "] ";
        cout << "\n-----------------------" << endl;
    }
};

int main() {
    Queue q;
    // Simulasi Skenario 
    q.enqueue("Budi");
    q.enqueue("Sari");
    q.enqueue("Eko");
    q.display();

    q.peek();
    q.dequeue();
    q.display();

    q.enqueue("Dewi");
    q.display();

    return 0;
}
