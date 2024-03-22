#include <stdio.h>

void generateFibonacci(int n) {
    int fib_sequence[1000000];  // Assuming a limit on the size of the sequence
    fib_sequence[0] = 0;
    fib_sequence[1] = 1;

    for (int i = 2; i < n; i++) {
        printf("%d ", fib_sequence[i - 2]);
        int c = fib_sequence[i - 1] + fib_sequence[i - 2];
        fib_sequence[i] = c;
    }

    printf("\n");
}

int main() {
    // Example: Generate Fibonacci numbers for the first 1000 terms
    generateFibonacci(10000000);

    return 0;
}