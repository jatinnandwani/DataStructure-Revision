/*
1 - Understanding of what is linked list and single linked list
2 - C++ objects and classes
3 - Pointers in c++
4 - Dynamic Memory Allocation

    Single List list Operations
    1 - AppendNode()
    2 - PrependNode()
    4 - insertNodeAfter()
    5 - insertNodeBykey()
    5 - updateNodeByKey()
    6 - print()

    node structure key|data|next
*/

#include <iostream>
using namespace std;
class Node{
        public:
            int key;
            int data;
            Node* next;

    Node(){
        key=0;
        data=0;
        next=NULL;
    }
    Node(int k, int d){
        key  = k;
        data = d;
    }
};


class SinglyLinkedList{
    public:
        Node* head;
        SinglyLinkedList(){
            head=NULL;
        }
        SingleLinkedList(Node *n){
                head=n;
        }

// 1 - check if node exist using key value
    Node* nodeExists(int k){
         Node* temp = NULL;
         Node* ptr = head;
         while(ptr != NULL){
            if(ptr ->key == k){
                temp = ptr;
            }
            ptr = ptr->next;
         }
         return temp;
    }
// 2 - appending of node to the last

        void appendNode(Node *n){
                if(nodeExists(n->key) != NULL){
                    cout<<"Node already exist"<<n->key<<endl;
                }else{
                     if(head ==NULL){
                        head = n;
                        cout<<"Node Appended"<<endl;
                     }else{
                        Node* ptr = head;
                        while(ptr->next != NULL){
                            ptr = ptr->next;
                        }
                        ptr->next = n;
                        cout<<"Node Appended"<<endl;
                     }
                }

        }

// 3 - Prepend the node -- attach the node to the start
        void prependNode(Node *n){
          if(nodeExists(n->key) != NULL){
            cout<<"node already exist with the same key"<<n->key<<endl;
          }else{
            n->next = head;
            head =n;
            cout<<"Node prepended"<<endl;
          }
    }


    };
