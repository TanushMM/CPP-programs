#include <iostream>

using namespace std;

// push and pop operations are done via the head node of the linked list 

class node{
    public:
    int data;
    node* next;
    node(int value){
        data = value;
        next = NULL;
    }
};

void push(node*& head,int value){
    node* n = new node(value);
    if (head == NULL){
        head = n;
    } else {
        n->next = head;
        head = n;
    }
}

void pop(node *&head){
    cout << "Popped Element: " << head->data << endl;
    head = head->next;
}

void display(node *&head){
    node* temp = head;
    while (temp != NULL){
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" <<endl;
}

int main(){
    node* head =NULL;
    push(head, 10);
    push(head, 20);
    push(head, 50);
    display(head);
    pop(head);
    display(head);
    return 0;
}