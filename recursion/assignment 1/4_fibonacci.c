// Given a number N, write a program to calculate Fibonacci(N).
// 0 1 1 2 3 5 8 ---> fibonacci series 
#include <stdio.h>
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    printf("Enter N: ");
    scanf("%d", &n);
    int fib = fibonacci(n);
    printf("%d",fib);
    return 0;
}
