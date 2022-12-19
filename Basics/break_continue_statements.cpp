#include <iostream>

using namespace std;

int main(){
    // Break statement
    // break - terminates the entire the loop 
    for (int i =0;i< 10 ;i++){
        if (i == 5){
            break;
        }
        cout << i  << " ";
    }
    cout << endl;

    //Continue statement 
    // continue - skips to the next iteration 
    for(int i =0; i < 10;i++){
        if (i == 5){
            continue;
        }
        cout << i << " ";
    }
    return 0;
}