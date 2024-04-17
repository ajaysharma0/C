//A character is an alphabet or not
#include <stdio.h>

int main() {
    char ch;
    scanf("%c", &ch);

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("Alphabet\n");
    } else {
        printf("Not an alphabet\n");
    }

    return 0;
}

