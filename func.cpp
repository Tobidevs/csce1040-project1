#include "header.h"

// Display the menu options to the user
void displayMenu() {
    std::cout << "\nMenu:" << std::endl;
    std::cout << "1. Display numbers in list" << std::endl;
    std::cout << "2. Add number to list" << std::endl;
    std::cout << "3. Remove number from list" << std::endl;
    std::cout << "4. Compute average of list of numbers" << std::endl;
    std::cout << "5. Compute minimum of list of numbers" << std::endl;
    std::cout << "6. Compute maximum of list of numbers" << std::endl;
    std::cout << "7. Exit program" << std::endl;
}

// Display the current list of numbers
void displayNumbers(const std::vector<double>& numbers) {
    if (numbers.empty()) {
        std::cout << "The list is empty." << std::endl;
    } else {
        std::cout << "Current list of numbers: ";
        for (double num : numbers) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }
}

// Add a number to the list
void addNumber(std::vector<double>& numbers) {
    double num;
    std::cout << "Enter a number to add to the list: ";
    std::cin >> num;

    if (std::cin.fail()) {
        std::cin.clear(); // Clear error flag
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
        std::cout << "Invalid input. Please enter a valid number." << std::endl;
    } else {
        numbers.push_back(num);
        std::cout << "Number " << num << " added to the list." << std::endl;
    }
}

// Remove a number from the list
void removeNumber(std::vector<double>& numbers) {
    if (numbers.empty()) {
        std::cout << "The list is empty. No numbers to remove." << std::endl;
        return;
    }

    double num;
    std::cout << "Enter a number to remove from the list: ";
    std::cin >> num;

    if (std::cin.fail()) {
        std::cin.clear(); // Clear error flag
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
        std::cout << "Invalid input. Please enter a valid number." << std::endl;
        return;
    }

    
    auto it = std::find(numbers.begin(), numbers.end(), num);
    if (it != numbers.end()) {
        numbers.erase(it);
        std::cout << "Number " << num << " removed from the list." << std::endl;
    } else {
        double lastNum = numbers.back();
        numbers.pop_back();
        std::cout << "Number " << num << " not found. Removed the last number " << lastNum << " instead." << std::endl;
    }
}

// Compute and display the average of the list of numbers
void computeAverage(const std::vector<double>& numbers) {
    if (numbers.empty()) {
        std::cout << "The list is empty. Cannot compute average." << std::endl;
        return;
    }



    double sum = 0;
    for (double num : numbers) {
        sum += num;
    }
    double average = sum / numbers.size();
    std::cout << "The average of the list is: " << average << std::endl;
}

// Compute and display the minimum number in the list
void computeMinimum(const std::vector<double>& numbers) {
    if (numbers.empty()) {
        std::cout << "The list is empty. Cannot compute minimum." << std::endl;
        return;
    }

    double minNum = *std::min_element(numbers.begin(), numbers.end());
    std::cout << "The minimum number in the list is: " << minNum << std::endl;
}




// Compute and display the maximum number in the list
void computeMaximum(const std::vector<double>& numbers) {
    if (numbers.empty()) {
        std::cout << "The list is empty. Cannot compute maximum." << std::endl;
        return;
    }

    double maxNum = *std::max_element(numbers.begin(), numbers.end());
    std::cout << "The maximum number in the list is: " << maxNum << std::endl;
}