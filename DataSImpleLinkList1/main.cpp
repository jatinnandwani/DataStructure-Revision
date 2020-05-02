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
// 2 - appending of node to the la

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
            head = n;
            cout<<"Node prepended"<<endl;
          }
    }

//  4 - Insert a node after a particular node in the list
    void insertNodeAfter(int k, Node *n){
            cout<<"IT IS COMING HERE -1"<<endl;
        if(nodeExists(n->key) != NULL){
            cout<<"IT IS COMING HERE - 2"<<endl;
            cout<<"node already exist with the same key"<<n->key<<endl;
        }else{
            cout<<"IT IS COMING HERE - 3"<<endl;
            Node* ptr = nodeExists(k);
            if(ptr == NULL){
                cout<<"NO NODE EXIST"<<endl;
            }else{
                if(nodeExists(n->key)){
                     cout<<"Node already exists"<<endl;
                }else{
                      n->next = ptr->next;
                      ptr->next = n;
                }
            }
        }
    }

// 5 - Delete linked by key
    void deleteNodeByKey(int k){
         if(head == NULL){
            cout<<"Single linked list is already empty"<<endl;
         }else if(head != NULL){

            if(head->key==k){
                head = head->next;
                cout<<"Node unlinked with value : "<<k<<endl;

            }else{
                Node* temp = NULL;
                Node* prevptr = head;
                Node* currentptr = head->next;
                while(currentptr!=NULL){
                    if(currentptr->key==k){
                        temp = currentptr;
                        currentptr=NULL;
                    }else{
                        prevptr = prevptr->next;
                        currentptr = currentptr->next;
                    }
                }

                if(temp!=NULL){
                    prevptr->next= temp->next;
                    cout<<"NODE UNLINKED WITH KEYS VALUE : "<<k<<endl;
                }else{
                    cout<<"Node Doesn't exist with key value : "<<k<<endl;
                }
            }

         }
    }

    //6 - Updating linked list by key
    void updateNodeByKey(int k , int d){
        Node* ptr= nodeExists(k);
        if(ptr != NULL){
                ptr->data=d;
                cout<<"Node Data Updated Successfully"<<endl;
        }else{
                cout<<"Node doesn't exist with key value :"<<k<<endl;
            }
        }

    //7 print linked linst
    void prinList(){
        if(head == NULL){
            cout<<"No nodes in singly linked list"<<endl;
        }else{
            cout<<endl<<"Single Link Values : "<<endl;
            Node* temp = head;

            while(temp != NULL){
                cout<<"("<<temp->key<<","<<temp->data<<") -->";
                temp = temp->next;
            }
        }
    }

    };



int main()
{

    SinglyLinkedList s;
    int option;
    int key1,k1,data1;
    do{
        cout<<"What operation do you want to perform? Enter 0 to exit"<<endl;
        cout<<"1. AppendNode()"<<endl;
        cout<<"2. prependNode()"<<endl;
        cout<<"3. insertNodeAfter()"<<endl;
        cout<<"4. deleteNOdeByKey()"<<endl;
        cout<<"5. updateNodeByKey()"<<endl;
        cout<<"6. print()"<<endl;
        cout<<"7. Clear Screen()"<<endl;

        cin>>option;
        Node* n1 = new Node();

        switch(option){
        case 0:
            break;
        case 1:
            cout<<"Apend Node Operation key and data of the node to be append"<<endl;
            cin>>key1;
            cin>>data1;
            n1->key  = key1;
            n1->data = data1;
            s.appendNode(n1);
            break;
        case 2:
            cout<<"Preprepend option please enter key and data to be inserted"<<endl;
            cin>>key1;
            cin>>data1;
            n1->key = key1;
            n1->data = data1;
            s.prependNode(n1);
            break;
        case 3:
            cout<<"Insert Node After Operation Enter a key after which you want to insert this new node"<<endl;
            cin>>k1;
            cout<<"Enter Key & data of the new node first:"<<endl;
            cin>>key1;
            cin>>data1;
            n1->key=key1;
            n1->data=data1;
            s.insertNodeAfter(k1,n1);
            break;
        case 4:
            cout<<"Delete Node By key operation \nEnter key of the node to be deleted"<<endl;
            cin>>k1;
            s.insertNodeAfter(k1);
            break;
        case 6:
            s.prinList();
            break;
        }

    }while(option != 0);
    return 0;
}
