#include <iostream>

using namespace std;

int main(){

    //Basic working os switch statement 
    // Switch - Used instead of using a lot of if statements
    int number;
    cout << "> ";
    cin >> number;

    switch(number){
        case 1:
            cout << number << "*";
            break;
        case 2:
            cout << number << "*";
            break;
        case 3:
            cout << number << "*";
            break;
        default:
            cout << "Invalid...";
            break;
    }    


    // Basic calculator using switch statement
    cout << endl;
    int a,b;
    cout<<"number> " ;
    cin>>a>>b;
    char command;
    cout << "command> ";
    cin >> command;

    switch(command){
        case '+':
            cout << a+b << endl;
            break;
        case '-':
            cout << a-b << endl;
            break;
        case '*':
            cout << a*b << endl;
            break;
        case '/':
            cout << a/b << endl;
            break;
        default:
            cout << "Invalid Input....";
            break;
    }
    return 0;
}