#include <iostream>

using namespace std;

int main()

{
    // declaring variables
    int x;

    // asking user for number
    cout << "Please enter a number : " << endl;
    cin >> x;

    // determining whether number is positive, negative or zero
    if (x > 0)
    {
        cout << "The number entered is positive" << endl;
    }
    else if (x < 0)
    {
        cout << "The number entered is negative" << endl;
    }
    else
    {
        cout << "The number entered is zero" << endl;
    }

    return 0;
}
