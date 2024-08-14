#include<iostream>
using namespace std;

class Queue {
    public:
        int arr[100];
        int head = -1;
        int rear = -1;
        int count = 0;
        int max_size = 100; // Define the maximum size of the queue

        bool empty() {
            return count == 0;
        }

        bool full() {
            return count == max_size;
        }

        void enq(int data) {
            if (full()) {
                cout << "Queue is full" << endl;
                return;
            }
            rear = (rear + 1) % max_size;
            arr[rear] = data;
            if (head == -1) head = 0; // Set head if queue was empty
            count++;
        }

        void deq() {
            if (empty()) {
                cout << "Queue is empty" << endl;
                return;
            }
            cout << "Dequeued: " << arr[head] << endl;
            head = (head + 1) % max_size;
            count--;
            if (count == 0) head = rear = -1; // Reset if queue is empty
        }

        void print() {
            if (empty()) {
                cout << "Queue is empty" << endl;
                return;
            }
            int i = head;
            for (int j = 0; j < count; j++) {
                cout << arr[i] << " ";
                i = (i + 1) % max_size;
            }
            cout << endl;
        }
};

int main() {
    Queue q;

    q.enq(1);
    q.enq(2);
    q.enq(3);

    q.deq();

    q.print();

    q.enq(4);
    q.enq(5);

    q.print();

    return 0;
}

