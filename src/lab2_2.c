#include <stdio.h>

/*
    Task:
    Write a function `long long factorial(int n)` that computes n!
    using a loop (not recursion).

    In main():
      - Ask user for an integer n
      - If n is negative, print an error and exit
      - Otherwise, call factorial and print the result
*/

long long factorial(int n) {
    int fact = 1, i;
    for(i = 1; i <= n; i++) {
        fact *= i;
        
    }
    // TODO: compute factorial iteratively
    return fact;
}

int main(void) {
    int n;

    printf("Enter a non-negative integer n: ");
    scanf("%d", &n);
    if(n<0){
        printf("error, enter a positive integer");
} else {
    int fact1 = factorial(n);
    printf("the factorial of n is: %d\n", fact1);
}
    

// TODO: validate input, call function, print result

    return 0;
}
