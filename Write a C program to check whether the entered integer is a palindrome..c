#include <stdio.h>

// Function to check if the given number is a palindrome
int isPalindrome(int num) {
    int reversed = 0, original = num;

    while (num > 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    return (reversed == original);
}

int main() {
    int num;

    // Input from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check if the entered number is a palindrome
    if (isPalindrome(num)) {
        printf("%d is a palindrome.\n", num);
    } else {
        printf("%d is not a palindrome.\n", num);
    }

    return 0;
}

