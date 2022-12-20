#include <iostream>

using namespace std;

int main(){
    for(int i= 1; i < 6;i++){
        for (int j =1; j< 6;j++){
            if (j<= i){
                cout << "* " ;
            } else {
                cout << "  ";
            }
        }
        for (int j =1; j< 6;j++){
            if (j+i > 5){
                cout << "* " ;
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    for(int i =1;i< 6;i++){
        for(int j = 1; j < 6;j++){
            if (i+j <= 6){
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        for(int j = 1; j < 6;j++){
            if (j >= i){
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}