#include <iostream>

using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int value){
        data = value;
        next = NULL;
    }
};

void enq(node *&head, int value){
    node* n = new node(value);
    if (head == NULL){
        head = n;
    } else {
        node* temp = head;
        while (temp->next != NULL){
            temp = temp->next;
        }
        temp->next = n;
    }
}

void deq(node *&head){
    if (head == NULL){
        cout << "Queue underflow"<< endl;
    } else {
        head = head->next;
    }
}

void display(node *&head){
    node* temp = head;
    while (temp != NULL){
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main(){
    node* head = NULL;
    enq(head, 10);
    enq(head, 20);
    display(head);
    deq(head);
    display(head);
    return 0;
}