#include<iostream>

using namespace std;

class queue {
	public:
		int head = -1 ;
		int rear = -1 ;
		int count = 0 ;
		
		int arr[5];
		int max_size = 5 ;
	
	bool empty(){
		return head < 0;
	} 
	
	bool full(){
		return count == max_size-1 ;
	}
	
	void enqueue(int data){
		
		if(empty())
		{
			head = 0 ;
		}
		rear = (rear + 1)%max_size;
		
		arr[rear] = data;
		count++;
	}
	
	void dequeue(){
		if(empty()){
			cout << "is Empty";
			head = -1 ;
			rear = -1 ;
		}
		
		head = (head + 1)%max_size;
	
		count--;
	
	}
	
	void print(){
		
		int i = head;
		cout << i;
            for (int j = 0; j < count; j++) {
                cout << arr[i] <<" head is "<< i << " " <<endl;
                cout << arr[j] <<"  "<< j<< " " <<endl;
                i = (i + 1) % max_size;
            }
	}
	
	
};

int main(){
	queue q;
	
	q.enqueue(1);
	q.enqueue(2);
	q.enqueue(3);
	q.enqueue(4);
//	q.enqueue(5);
	
	q.dequeue();
	q.enqueue(5);
	q.enqueue(6);
	q.dequeue();
	q.enqueue(7);
	
	q.print();
	
	return 0;

}
