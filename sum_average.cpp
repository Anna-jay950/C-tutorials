#include <iostream>

using namespace std;

int main()
{
    // declaring variables
    int num, x, sum = 0, average;

    cout << "Enter the number of values: " << endl;
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        cout << "Enter number: " << endl;
        cin >> x;

        sum += x;
    }

    // adding the numbers
    cout << "\n\nThe total of the four numbers is: " << sum << endl;

    // average of the numbers
    average = sum / num;
    cout << "\nThe average of the four numbers is : " << average << endl;

    return 0;
}
