#include <iostream>
using namespace std;

int main() {

    //declaring variables
    int number;

    //ask the user for input
    cout << "Enter number" << endl;
    cin >> number;

    //check for the factors of a number
    for (int i=1; i<=number; i++){
        if(number % i == 0){
            cout << i << endl;
        }
    }
    

    return 0;
}