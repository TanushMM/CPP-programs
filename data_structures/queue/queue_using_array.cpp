#include <iostream>

using namespace std;

int queue[10];
int queue_size = 10;
int front = -1;
int rear = -1;


void enq(int value){
    if (front == queue_size - 1){
        cout << "Queue Overflow";
    } else {
        if (front == -1 && rear == -1){
            front++; rear++;
            queue[front] = value;
        } else {
            front++;
            queue[front] = value;
        }
    }
}

void deq(){
    if(front == -1 && rear == -1){
        cout << "Queue Underflow" << endl;
    } else {
        rear++;
    }
}

void display(){
    
    for(int i = rear; i <= front; i++){
        cout << "|";
        cout << queue[i] << "|" << endl;
    }
    cout << endl;
}

// void display(){
//     for(int i = rear; i <= front; i++){
//         cout << queue[i] << " ";
//     }
//     cout << endl;
// }

int main(){
    enq(10);
    enq(20);
    display();
    deq();
    display();
    return 0;
}