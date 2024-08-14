#include <iostream>
using namespace std;

class Stack {
private:
    int Array[100];
    int top;

public:
    Stack() {
        top = -1; // Initialize top of stack
    }

    bool empty() {
        return (top == -1); // Check if stack is empty
    }

    bool full() {
        return (top == 99); // Check if stack is full
    }

    void push(int data) {
        if (!full()) {
            Array[++top] = data; // Increment top and insert element at top index
//            cout << "Added " << data << " to the stack." << endl;
        } else {
            cout << "Stack Overflow" << endl;
        }
    }

    int pop() {
        if (!empty()) {
            int temp = Array[top--]; // Decrement top and return element at top index
            return temp;
        } else {
            return -1; // Return -1 for empty stack (or handle error condition)
        }
    }

    int peek() {
        if (!empty()) {
            return Array[top]; // Return element at top index without removing it
        } else {
            return -1; // Return -1 for empty stack (or handle error condition)
        }
    }

    void print() {
        if (!empty()) {
//            cout << "Stack data from bottom to top: ";
            for (int i = 0; i <= top; ++i) {
                cout << Array[i] << " ";
            }
            cout << endl;
        } else {
            cout << endl;
        }
    }

    int size() {
        return top + 1; // Stack size is the number of elements (top + 1)
    }
};

int main() {
    Stack stack;
    char choice;
    int data;

    do {
    
        cin >> choice;

        switch (choice) {
            case 'U':
//                cout << "Enter data to add: ";
                cin >> data;
                stack.push(data);
                break;
            case 'O': {
                int popped = stack.pop();
                if (popped != -1) {
                    cout <<  popped << endl;
                }
                break;
            }
            case 'T': {
                int topElement = stack.peek();
                if (topElement != -1) {
                    cout <<  topElement << endl;
                }
                break;
            }
            case 'P':
                stack.print();
                break;
            case 'N':
                cout <<  stack.size() << endl;
                break;
            case 'X':
                break;
            default:
                cout << endl;
                break;
        }
    } while (choice != 'X');

    return 0;
}

