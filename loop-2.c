#include<stdio.h>

int main() {
    int num;
    int n = 0;
    
    printf("Your number: ");
    scanf("%d", &num); // Prompt user for input

    // Loop to check if the number is prime
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) { // If number is divisible by i (not prime)
            printf("%d is not a prime number\n", num);
            n = 1; // Set n to 1 to indicate the number is not prime
            break; // Exit the loop since we found a divisor
        }
    }

    // If the number is not divisible by any number, it's prime
    if (n == 0) {
        printf("%d is a prime number\n", num);
    }
    
    return 0;
}
