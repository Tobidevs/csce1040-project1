#include "header.h"


void displayIntro() {
    cout << "Computer Science of Engineering\n";
    cout << "CSCE 1040 - Computer Programming II\n";
    cout << "Tobi Akere - oaa0167 - oaa0167@my.unt.edu\n";
}

// Function to get valid integer input
int getValidInt(const string& prompt) {
    int value;
    while (true) {
        cout << prompt;
        cin >> value;

        if (cin.fail()) { // Check for invalid input
            cout << "Invalid input. Please enter a valid number.\n";
            cin.clear(); // Clear the error state
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
        } else {
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard leftover input
            return value;
        }
    }
}