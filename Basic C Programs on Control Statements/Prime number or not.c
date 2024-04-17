#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int flag = 0; // Initialize flag to indicate the number is not prime

    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            flag = 1; // Set flag to indicate the number is not prime
            break;
        }
    }

    if (flag == 0 && n > 1) {
        printf("%d is a prime number\n", n);
    } else {
        printf("%d is not a prime number\n", n);
    }

    return 0;
}
