#include <iostream>

using namespace std;

int stack[10];
int stack_size = 10;
int head = -1;

void display(){
    
    for(int i = head; i >= 0; i--){
        cout << "|";
        cout << stack[i] << "|" << endl;
    }
    cout << endl;
}

void push(int element){
    if (head == stack_size - 1){
        cout << "Stack Overflow Exception"<< endl;
    } else {
        head++;
        stack[head] = element; 
    }
}

void pop(){
    if (head == -1){
        cout << "Stack Underflow Exception" << endl;
    } else {
        cout << "Popped Element: " << stack[head] << endl;
        head--;
    }
}

int main(){
    push(10);
    push(20);
    push(40);
    push(90);
    display();  
    pop();
    display();
}