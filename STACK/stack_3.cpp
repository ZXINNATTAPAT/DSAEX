#include<iostream>
using namespace std;

class stack{
	public: 
		int top = -1 ;
		int arr[100] ;
	
	void push(int data){
		if(top == 99){
			cout<<"stack is full";
		}
		top++;
		arr[top] = data;
	}	
	void pop(){
		if(top < 0){
			cout<<"stack is empty";
		}
		top--;
	}
	
	void print(){
		for(int i=0;i<=top;i++){
			cout<<arr[i]<<" ";
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
