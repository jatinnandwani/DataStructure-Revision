#include <iostream>

using namespace std;

class Queue{
    private:
        int front;
        int rear;
        int arr[5];

    public:
        Queue(){
        front = -1;
        rear = -1;
        for(int i = 0; i<5; i++){
            arr[i]=0;
            }
        }

        bool isEmpty(){
            if(rear == -1 && front == -1){
                return true;
            }else{
                return false;
            }
        }

        bool isFull(){
            if(rear == 4){
                return true;
            }else{
                return false;
            }
        }

        void enqueue(int value){
            if(isFull()){
                return;
            }else if(isEmpty()){
                front = rear = 0;
                arr[rear]=value;
            }else{
                rear++;
                arr[rear]=value;
            }
        }

        int dequeue(){
            int x;
            if(isEmpty()){
                    cout<<"QUEUE IS EMPTY"<<endl;
                return 0;
            }else if(front == rear){
                x = arr[front];
                arr[front] = 0;
                rear = -1;
                front = -1;
                return x;
            }else{
                x = arr[front];
                arr[front] = 0;
                front++;
                return x;
            }
        }

        int count(){
            if(front == -1 && rear == -1)
                return (rear-front);
                else
            return (rear-front+1);
        }

        void display(){
            cout<<"All values in the quere are here"<<endl;
            for(int i = 0 ; i<5; i++){
                cout<<arr[i]<<" "<<endl;
            }
        }


};

int main()
{
    Queue q;
    int option;
    int value;
    do{
        cout<<"\n\nWhat operation do you want to perform? Select option number. Enter 0 to exit."<<endl;
        cout<<"1. Enqueue()"<<endl;
        cout<<"2. Dequeue()"<<endl;
        cout<<"3. isEmpty()"<<endl;
        cout<<"4. isFull()"<<endl;
        cout<<"5. count()"<<endl;
        cout<<"6. Display()"<<endl;
        cout<<"7. Clear Screen()"<<endl<<endl ;

        cin>>option;
        switch(option){
        case 0:
            break;
        case 1:
            cout<<"Enqueue operation to enqueue in the queue"<<endl;
            cin>>value;
            q.enqueue(value);
            break;
        case 2:
            cout<<"Dequeue operation and value is "<<q.dequeue()<<endl;
            break;
        case 3:
            if(q.isEmpty()){
                cout<<"Queue is Empty"<<endl;
            }else{
                cout<<"Queue is not Empty"<<endl;
            }
            break;
        case 4:
            if(q.isFull()){
                cout<<"Queue is Full"<<endl;
            }else{
                cout<<"Queue is not Full"<<endl;
            }
            break;
        case 5:
            cout<<"count of operation - "<<q.count()<<endl;
            break;
        case 6:
            cout<<"Display Operation called"<<endl;
            q.display();
            break;
        case 7:
            system("cls");
            break;
        default:
            cout<<"Enter valid key"<<endl;
            break;
        }
    }while(option != 0);
    return 0;
}
