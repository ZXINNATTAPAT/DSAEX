#include<iostream>
using namespace std;

class queue{
	public:
		int arr[100];
		int head = -1 ;
		int rear = -1 ;
		int count = 0;
		int max_size = 100;
	
	bool empty(){
		return count == 0;
	}
	
	bool full(){
		return count == max_size;
	}
	
	void enq(int data){
		if(full())
		{
			cout<< " full";
		}
		if(head){
			head = 0;
		}
		rear = (rear + 1)% max_size;
		arr[rear] = data ;
		
	
		count++;
	}
	
	void deq(){
		if(empty()){
			cout<<"empty";
		}
		cout<<"Dequeued"<< arr[head] << endl;
		head = (head+1)%max_size;
		count--;
		if(count == 0){
			head = -1 ;
			rear = -1 ;
		}
		
	}
	
	void print(){
		int i = head;
		for(int j=0 ; j<count ;j++){
			cout<< arr[i] <<" ";
			i =(i+1)%max_size;
			
		}
		cout<<endl;
	}
	
};

int main(){
	queue q;
	
	q.enq(1);
	q.enq(2);
	q.enq(3);
	
	q.deq();
	
	q.print();
	
	
}
