#include <stdio.h>

int main() 
{
    int x;
    int y;
    int z;

    // Asking the user to enter the two integer values
    printf("Enter the first integer: ");
    scanf("%d", &x);
    
    printf("Enter the second integer: ");
    scanf("%d", &y);

    // Swap the values using a temporary variable
    z = x;
    x = y;
    y = z;

    // Print the swapped values
    printf("Swapped values:\n");
    printf("first = %d\n", x);
    printf("second = %d\n", y);

    return 0;
}