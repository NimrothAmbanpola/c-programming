#include <stdio.h>        // Includes the standard input-output library
                          // Needed for printf() and scanf()

int main() {              // Main function: program execution starts here

    int n, i;             // Declare integer variables:
                          // n → number of elements in the array
                          // i → loop counter

    int sum = 0;          // Variable to store the sum of array elements
                          // Initialized to 0 because sum starts from zero

    printf("Enter number of elements: ");
                          // Prints message asking user for array size

    scanf("%d", &n);      // Reads the number entered by the user
                          // Stores it in variable n

    int arr[n];           // Declares an integer array of size n
                          // The size is decided by the user input

    printf("Enter %d elements:\n", n);
                          // Asks the user to enter n numbers

    for (i = 1; i < n; i++) {   // for loop runs from i = 0 to i = n-1
                                // Used to read array elements one by one

        scanf("%d", &arr[i]);  // Reads one number
                                // Stores it in arr[i]
    }

    for (i = 1; i < n; i+= 2) {  // for loop runs again from 0 to n-1
                                // Used to calculate the sum

        sum = sum + arr[i];    // Adds each array element to sum
    }

    printf("Sum of array elements = %d\n", sum);
                               // Prints the final sum of the array

    /* -------- Time Complexity Explanation -------- */
    printf("\nTime Complexity Analysis:\n");
    printf("1. Reading the array takes n operations.\n");
    printf("2. Calculating the sum takes n operations.\n");
    printf("Total operations = n + n = 2n.\n");
    printf("Ignoring constants, Time Complexity = O(n).\n");

    /* -------- Space Complexity Explanation -------- */
    printf("\nSpace Complexity Analysis:\n");
    printf("1. Array arr[] stores n integers → O(n) space.\n");
    printf("2. Variables n, i, sum use constant space → O(1).\n");
    printf("Total Space Complexity = O(n).\n");

    return 0;         // Program ends
}
