#include <stdio.h>

int factorial(int n) {
    if(n == 0) return 1;
    return n * factorial(n - 1);
}

int fibonacci(int n) {
    if(n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int sumDigits(int n) {
    if(n == 0) return 0;
    return (n % 10) + sumDigits(n / 10);
}

int main() {
    int n = 5;
    printf("Factorial of %d = %d\n", n, factorial(n));
    printf("Fibonacci(%d) = %d\n", n, fibonacci(n));
    printf("Sum of digits of 1234 = %d\n", sumDigits(1234));
    return 0;
}
