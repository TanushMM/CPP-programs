#include <iostream>

using namespace std;

int main(){
    // Inverted half pyramid
    for (int i = 0; i< 4 ;i++){
        for (int j = 0; j < 4; j++){
            if (i+j <= 3){
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    // normal half pyramid 
    for (int i = 0; i< 4 ;i++){
        for (int j = 0; j < 4; j++){
            if (i+j >= 3){
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    //floyd's triangle
    int count = 1;
    for(int i = 0;i <= 5;i++){
        for (int j = 0; j < i; j++){
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
    return 0;
}