#include <stdio.h>

int main() {
    // Declare two integer variables
    int a, b;

    // Input values for the variables
    printf("Enter the value of a: ");
    scanf("%d", &a);

    printf("Enter the value of b: ");
    scanf("%d", &b);

    // Display the values before swapping
    printf("\nBefore swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    // Swap the values using a temporary variable
    int temp = a;
    a = b;
    b = temp;

    // Display the values after swapping
    printf("\nAfter swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    return 0;
}

