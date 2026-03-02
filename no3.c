#include <stdio.h>

int fac(int);
int fib(int);

int main() {
    printf("Factorial of 5 (Case 2): %d\n", fac(5));
    printf("Fibonacci term 7 (Case 3): %d\n", fib(7));
    
    return 0;
}


int fac(int n) {
    
    if (n <= 1) {
        return 1;
    }
   
    return n * fac(n - 1);
}


int fib(int n) {
    
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    }
   
    return fib(n - 1) + fib(n - 2);
}
