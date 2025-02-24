#ifndef Header_H
#define Header_H

#include <iostream>
#include <vector>
#include <limits>
#include <algorithm>




// Function prototypes
void displayMenu();
void displayNumbers(const std::vector<double>& numbers);
void addNumber(std::vector<double>& numbers);
void removeNumber(std::vector<double>& numbers);
void computeAverage(const std::vector<double>& numbers);
void computeMinimum(const std::vector<double>& numbers);
void computeMaximum(const std::vector<double>& numbers);

#endif