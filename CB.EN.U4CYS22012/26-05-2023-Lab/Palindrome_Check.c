#include <stdio.h>

int Palindrome(int num)  // Function to check if the given number is a palindrome or not
{
    int n = num;  // Store the original number
    int rnum = 0;  // Variable to store the reversed number

    // Reverse the number by iterating until num becomes 0
    while (num != 0) {
        int remainder = num % 10;  // Get the remainder (last digit) of the number
        rnum = rnum * 10 + remainder;  // Build the reversed number by multiplying by 10 and adding the remainder
        num /= 10;  // Remove the last digit from the number
    }

    // Check if the original number is equal to the reversed number
    if (n == rnum)
        return 1;  // Return 1 if it is a palindrome
    else
        return 0;  // Return 0 if it is not a palindrome
}

int main() {
    int num;
    scanf("%d", &num);  // Read the number from the user

    if (num < 0)  // Check if the number is negative
    {
        printf("Is not a palindrome.\n");  // Print "Is not a palindrome." to indicate negative numbers are not palindromes
    }
    else if (Palindrome(num))  // Check if the number is a palindrome using the Palindrome function
    {
        printf("Is a palindrome.\n");  // Print "Is a palindrome." if it is a palindrome
    }
    else{
        printf("Is not a palindrome.\n");  // Print "Is not a palindrome." if it is not a palindrome
    }

    return 0;
}
