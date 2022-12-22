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

void insert_head(node *&head, int value){  
    node* n = new node(value);
    if (head == NULL){
        head = n;
    } else {
        n->next = head;
        head = n;
    }
}

void insert_between(node *&head, int key, int value){
    node *n = new node(value);
    node* temp = head;
    if (head == NULL){
        head = n;
    } else {
        while (temp->data != key){
            if (temp->next == NULL){
                cout << "Element not found";
            } else {
                temp = temp->next;
            }
        }
        n->next = temp->next;
        temp->next = n;
    }
}

void insert_tail(node *&head, int value){
    node* n = new node(value);
    if (head == NULL){
        head = n;
    } else {
        node* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = n;
        n->next = NULL;
    }
}

void deletion(node *&head, int key){
    node* temp = head;
    node* prev = NULL;
    if (temp->data == key){
        head = temp->next;
        delete temp;
        return;
    } else {
        while(temp != NULL){
            if (temp->data != key){
                prev = temp;
                temp = temp->next;
            } else {
                prev->next = temp->next;
                delete temp;
                return;
            }
        }
    }
}

void display(node *&head){
    node* temp = head;
    while(temp->next != NULL){
        cout << temp ->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL";
}

int main(){
    node* head = NULL;
    insert_head(head,10);
    insert_head(head, 20);
    insert_tail(head, 30);
    insert_between(head, 10, 40);
    display(head);
    cout << endl;
    deletion(head, 40);
    display(head);
    return 0;
}