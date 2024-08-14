#include <iostream>
#include <string>

using namespace std;

class Stack {
public:
    int Array[100]; 
    int top;
    
    Stack() {
        top = -1; 
    }

    bool empty() {
        return (top == -1);
    }

    bool full() {
        return (top == 99); 
    }

    void push(int data) {
        if (!full()) {
            top++;
            Array[top] = data;
        }
    }

    int pop() {
        if (!empty()) {
            int temp = Array[top];
            top--;
            return temp;
        }
        return -1; 
    }

    void print() {
        for (int i = 0; i <= top; i++) {
            cout << Array[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack s;
    string text;
    getline(cin, text);

    for (int i = 0; i < text.length(); i++) 
	{
        if (text[i] == '(') 
		{
            s.push(i); 
        } 
		else if (text[i] == ')') {
            if (!s.empty() && text[s.pop()] == '(')
			{
				
            } 
			else {
                s.push(i); 
            }
        }
    }

    if (s.empty()) {
        cout << "Pass";
    } else {
        cout << "Error";
    }

    return 0;
}

