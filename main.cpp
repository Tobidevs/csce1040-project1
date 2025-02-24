#include "header.h"

int main() {
    // Display student information
    std::cout << "Name: Tobi Akere" << std::endl;
    std::cout << "EUID: oaa0167" << std::endl;
    std::cout << "Email: tobiakere@my.unt.edu" << std::endl;
    std::cout << "Department: Computer Science and Engineering" << std::endl;
    std::cout << "Course: CSCE 1040" << std::endl;

    std::vector<double> numbers; // List of numbers
    int choice;

    do {
        displayMenu();
        std::cout << "Enter your choice (1-7): ";
        std::cin >> choice;

        // Validate input
        if (std::cin.fail()) {
            std::cin.clear(); // Clear error flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
            std::cout << "Invalid input. Please enter a number between 1 and 7." << std::endl;
            continue;
        }

        switch (choice) {
            case 1:
                displayNumbers(numbers);
                break;
            case 2:
                addNumber(numbers);
                break;
            case 3:
                removeNumber(numbers);
                break;
            case 4:
                computeAverage(numbers);
                break;
            case 5:
                computeMinimum(numbers);
                break;
            case 6:
                computeMaximum(numbers);
                break;
            case 7:
                std::cout << "Exiting the program. Goodbye!" << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Please enter a number between 1 and 7." << std::endl;
                break;
        }
    } while (choice != 7);

    return 0;
}