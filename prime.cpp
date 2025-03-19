#include <iostream>

using namespace std;

int main()
{
    //declaring variables
    int x;
    bool isPrimeNumber = true;

    //Asking user for input
    cout << "Enter a number" <<endl;
    cin >> x;

    //checking whether number is prime or not
    for (int i=2; i < x; i++){

        if (x % i == 0){
            isPrimeNumber = false;
            break;
        }
    }

    if(isPrimeNumber) {
        cout << "Number is a Prime Number"<< endl;
    } else {
        cout << "Number is not a prime number" << endl;
    }

    return 0;
}
