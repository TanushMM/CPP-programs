#include <iostream>

using namespace std;

void normal_conditional_statement(){
    // find odd or even 
    int number;
    cout << "> "; cin >> number;
    if (number%1 == 0){
        cout << number << " is a even number.";
    } else {
        cout << number << " is a odd number.";
    }
}

void smart_condition_statements(){
    // conditional statements using && and ||
    // toupper(), tolower(), isupper(), islower()
    char swollen, pain;
    cout << "Enter if the leg is swollen: "; cin >> swollen;
    cout << "Enter if the it's paining: "; cin >> pain;
    if (toupper(swollen) == 'T' && toupper(pain) == 'T'){
        cout << "It's a fracture" << endl;
    } else if (toupper(swollen) == 'F' || toupper(pain) == 'T'){
        cout << "It's a  bruise.";
    } else if (toupper(swollen) == 'T' && toupper(pain) == 'F'){
        cout << "It's a Sprain";
    } else {
        cout << "Invalid input.";
    }
}

int main(){
    normal_conditional_statement();
    smart_condition_statements();
    return 0;
}