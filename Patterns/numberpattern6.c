#include <stdio.h>

int main() {
    int rows = 4; // Number of rows in the pattern

    for (int i = rows; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
        printf("%d", i);
        }
        printf("\n");
    }

    return 0;
}
