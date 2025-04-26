#include <iostream>
using namespace std;


class Node {
public:
    int data;
    Node* next;

    Node(int value){
        data = value;
        next = NULL;

    }
};

class List {
    Node* head;
    Node* tail;

    public:  
    List(){
        head = NULL;
        tail = NULL;
    };

    void push_front(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = newNode;
            tail = newNode;
            return;
        } else {
            newNode->next = head;
            head = newNode;
        }
    }

    void push_back(int val){
        Node* newNode = new Node(val);

        if(head == NULL){
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        };
    };

    void pop_front(int val){
        if(head == NULL) {
            cout<< "LL is empty\n" ;
            return;
        }

        Node* temp = head;
        head = head->next;
        temp->next = NULL;

        delete temp;
    }

    void pop_back(int val){
        if(head == NULL){
            cout << "LL is empty\n";
            
        }
    }
    void printLL(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};



int main(){
    cout << "Hello World!" << endl;

    List ll;

    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.push_back(4);

    ll.printLL();
    return 0;
}