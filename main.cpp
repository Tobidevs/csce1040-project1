#include "header.h"

int main()
{
    int userInt;
    int userId;
    bool menuRepeat = true; 

    

    while (menuRepeat) {
        // Display menu
        printf("\n---------------- Menu ----------------\n\n");
        printf("1. Display numbers in a list \n");
        printf("2. Add number to list\n");
        printf("3. Remove number from list\n");
        printf("4. Compute average of list of numbers\n");
        printf("5. Compute minimum of list of numbers\n");
        printf("6. Compute maximum of list of numbers\n");
        printf("7. Quit the program\n");
        userInt = getValidInt("Enter choice: ");

}
    return 0;
}