#include<iostream>
using namespace std;

class stack{
    public : 
    int top = -1 ;
    int arr[100];

    bool empty(){
        return top < 0 ; 
    }

    void push(int x){
        if(top > 100 -1){
            cout << "stack is Full" <<endl;
        }
        top++;
        arr[top] = x; 
    }

    void pop(){
        if(empty()){
            cout << "stack is empty" << endl;
        }
        top--;
    }

    int print()
	{
        for(int i = 0 ; i <= top ; i++ )
		{
            cout << arr[i] << " " ;
   		 }
    }

};

int main(){
    stack s;
    char input;
    int cl;

    do{
        cin>>input;


        if(input == 'U')
        {
            cin>>cl;
            s.push(cl);
        }
        else if(input == 'O')
        {
            cout<<s.arr[s.top]<<endl;
			s.pop();
        }
        else if(input == 'T')
        {
            cout<<s.arr[s.top] ;
            cout<<endl;
        }
        else if(input == 'N')
        {
            cout<<s.top+1;
            cout<<endl;
        }
        else if(input == 'P')
        {
            s.print();
            cout<<endl;
        }
        else if(input == 'X')
        {
            break;
        }
    }while ( input !=  'X');
    
	return 0;
}
