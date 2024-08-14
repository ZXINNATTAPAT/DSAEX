#include<iostream>
using namespace std;

class queue{
    public:
    int top = -1 ;
    int arr[100];

    bool empty()
    {
        return top < 0 ;
    }

    void enqueue(int a){
        if(top >= 100-1)
        {
            cout << "queue is full" ;
        }
        top++;
        arr[top] = a;
    }

    void dequeue(){
        if(empty()){
            cout << "queue is empty" ;
        }

        for(int i = 0 ; i <= top ; i++){
            arr[i] = arr[i+1];
        }
        top--;
        
        
    }

    void print(){
        for(int i = 0 ; i <= top ; i++){
            cout << arr[i] << " ";
        }
        cout<<endl;
    }
};

int main(){
    queue q;
    char cl;
    int input;

    do{
        cin>>cl;

        if(cl == 'e'){
            cin>>input;
            q.enqueue(input);
        }
        else if(cl == 'd'){
            cout<<q.arr[0] <<endl;
            q.dequeue();
        }
        else if(cl == 'n'){
            cout<< q.top+1 <<endl;
        }
        else if(cl == 's'){
            cout<<q.arr[0]<<" "<<q.arr[q.top] <<endl;
        }
        else if(cl == 'p'){
            q.print();
        }
        else if(cl == 'x'){
            break;
        }

    }while(cl != 'x');



    return 0 ;
}