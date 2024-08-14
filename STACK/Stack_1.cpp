#include<iostream>
using namespace std ;

class stack{
    public:
    int top = -1;
    int arr[100];

    bool empty(){
        return top < 0; //check empty
    }

    void push(int input){
        if(top >= 100 - 1){
            // arr[] = input;
            cout<<"Stack is full";
        }
        arr[++top] = input;
    }
    
    void pop(){
        if(top<0){
            cout<<"Stack is Empty";
        }
        --top;
    }

    void print(){
        for (int i = 0; i <= top; i++) {
            cout << arr[i] << " ";
        }
    }

};

int main(){
    stack s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    s.pop();
    s.pop();

    s.print();

     return 0;

}

