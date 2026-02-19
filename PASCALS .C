#include <stdio.h>
int main() {
    int i, j, space;
    int rows = 5;
    int c;
    for (i = 0; i < rows; i++) {
        for (space = 1; space <= rows - i; space++) {
            printf("  ");
        }
        c = 1; 
        for (j = 0; j <= i; j++) {
            printf("%4d", c);
            c = c * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}
