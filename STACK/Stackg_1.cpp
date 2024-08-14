#include<iostream>
#include<string>
using namespace std ;

class stack{
    public:
    int top = -1;
    char arr[100];

    bool empty(){
        return top < 0; //check empty
    }

    void push(char input){
        if(top >= 100 - 1){
            // arr[] = input;
            // cout<<"Stack is full";
        }
        arr[++top] = input;
    }
    
    void pop(){
        if(top<0){
            // cout<<"Stack is Empty";
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
    int i , count;
    string input;

    getline(cin,input);

    for(i=0 ; i< input.length() ;i++)
    {
        //ถ้าเจอ '(' ให้เข้า Stack 
        if(input[i] == '(' )
        {
            s.push('(');
        }
        
        //ถ้าเจอ ')' ให้เข้า Stack 
        else if(input[i] == ')')
        {
            if(!s.empty() && s.arr[s.top] == '(' )
            {
                s.pop();
            }
            else{
                s.push(')');
            }
                
        }
            
    }
  

    if (s.empty()) 
    {
        // s.print();
        cout << "Pass";
    } 
    else 
    {
        // s.print();
        cout << "Error";
    }

     return 0;
}

