#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a = 0;
    int b = 1;
    int c = 0;

    for (int i = 0; i < n; i++) {
        c = a + b;
        a = b;
        b = c;
    }

    printf("%d", c);

    return 0;
}
