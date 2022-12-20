#include <iostream>

using namespace std;

int main(){
    // Rectangular pattern but hollow inside 
    for (int i =0; i < 7; i++){
        for(int j = 0; j < 4;j++){
            if (i == 0 || i == 6 || j == 0 || j == 3){
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}