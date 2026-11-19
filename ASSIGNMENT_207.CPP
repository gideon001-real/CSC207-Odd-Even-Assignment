#include <iostream>
using namespace std;

int main() {
    int number;

    // Ask the user for a number
    cout << "Enter an integer: ";
    cin >> number;

    // Check if the remainder when divided by 2 is 0
    if (number % 2 == 0) {
        cout << number << " is an Even number." << endl;
    } else {
        cout << number << " is an Odd number." << endl;
    }

    return 0;
}
