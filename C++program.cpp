#include <iostream>

using namespace std;

// Function to print the divisors of a given number
void printDivisors(int n) {
    cout << n << endl;  // Print the number itself first
    for (int i = n - 1; i >= 1; i--) {
        if (n % i == 0) {
            cout << i << endl;
        }
    }
}

int main() {
    int num;
    char repeat;

    cout << "This program is designed to exhibit the positive divisors of positive integers supplied by you.\n";
    cout << "The program will repeatedly prompt you to enter a positive integer.\n";
    cout << "Each time you enter a positive integer, the program will print all the divisors of your integer in a column and in decreasing order.\n";

    do {
        cout << "Please enter a positive integer: ";
        cin >> num;

        // Check if the input is a valid positive integer
        while (num <= 0) {
            cout << num << " is not a positive integer. Please enter a positive integer: ";
            cin >> num;
        }

        // Print divisors of the valid positive integer
        printDivisors(num);

        // Ask if the user wants to continue
        cout << "Would you like to see the divisors of another integer (Y/N)? ";
        cin >> repeat;

        // Validate response to repeat
        while (repeat != 'Y' && repeat != 'y' && repeat != 'N' && repeat != 'n') {
            cout << "Please respond with Y (or y) for yes and N (or n) for no.\n";
            cout << "Would you like to see the divisors of another integer (Y/N)? ";
            cin >> repeat;
        }

    } while (repeat == 'Y' || repeat == 'y');

    return 0;
}
