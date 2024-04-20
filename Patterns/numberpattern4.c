#include<stdio.h>

void main(){
    int i, j, space, rows, number = 1;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for(i = rows; i >= 1; i--){
        for(space = 1; space <= rows - i; space++){
            printf(" ");
        }
        
        for(j = i; j>= 1; j--){
            printf("%d ", number);
            number++;
        }
        
        printf("\n");
    }
}
