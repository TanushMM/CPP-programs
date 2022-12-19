#include <iostream>

using namespace std;

void for_loop(){
    // Basic FOR loop
    cout << "For Loop: ";
    for (int i =0; i< 10; i++){
        cout << i << " ";
    }
    cout << endl;
}

void while_loop(){
    // Basic WHILE loop
    cout << "While Loop: ";
    int i = 0;
    while (i < 10){
        cout << i << " ";
        i++;
    }
    cout << endl;
}

void do_while_loop(){
    //Basic DO..WHILE loop
    cout << "Do..While Loop: ";
    int i = 0;
    do {
        cout << i << " ";
        i++;
    } while(i < 10);
    cout << endl;
}

int main(){
    for_loop();
    while_loop();
    do_while_loop();
    return 0;
}