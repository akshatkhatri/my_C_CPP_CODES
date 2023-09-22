//author-akshat khatri//
//date-12-06-2023//
// a program to print all the prime factors of a number//

#include <stdio.h>
#include <math.h>

void PrimeFactors(int n) {
    // Print all 2s that divide n
    while (n % 2 == 0) {
        printf("%d ", 2);
        n = n / 2;
    }
    
    // n must be odd at this point. So we can skip one element (i.e., i = i + 2)
    for (int i = 3; i <= n; i = i + 2) {
        // While i divides n, print i and divide n
        while (n % i == 0) {
            printf("%d ", i);
            n = n / i;
        }
    }
    
    // If n is still greater than 2, then n is a prime number
    if (n > 2) {
        printf("%d ", n);
    }
}

int main() {
    int number;
    
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    
    printf("Prime factors of %d are: ", number);
    PrimeFactors(number);
    
    return 0;
}
