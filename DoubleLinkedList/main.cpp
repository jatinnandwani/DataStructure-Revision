#include <iostream>

using namespace std;
class Node{
public:
    int key;
    int data;
    Node* next;
    Node* previous;

    Node(){
        key = 0;
        data = 0;
        next = NULL;
        previous = NULL;
    }
    Node(int k, int d){
        key = d;
        data = d;
    }
};
class DoubleLinkedList{
public:
    Node* head;
    DoubleLinkedList(){
        head=NULL;
    }
    DoubleLinkedList(Node *n){
        head = n;
    }
//1 - check if node exist using key value
Node* checkIfNodeExist(int k){
    Node* temp = NULL;
    Node* ptr = head;

   while (ptr != NULL){
    if(ptr->key ==k){
        temp = ptr;
    }
    ptr = ptr->next;
   }

   return temp;
}
void appendNode(Node* n){
    if(checkIfNodeExist){

    }
}



};

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
