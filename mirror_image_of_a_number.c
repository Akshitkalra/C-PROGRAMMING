#include <stdio.h>

int main() {
    int num, r = 0, remainder;
    

    printf("Enter a number: ");
    scanf("%d", &num);
    
    for (; num != 0; num /= 10) {
        remainder = num % 10;
        r = r * 10 + remainder;
    }

    printf("Reverse of Number is: %d\n", r);
    
    return 0;
}
