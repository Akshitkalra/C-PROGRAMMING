#include<stdio.h>
void main(){
    int i,j,rows,k;
    printf("Enter number of rows:");
    scanf("%d",&rows);
 // upper part //
    for(i=0;i<=rows/2;i++){
        for(j=0;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    // for(i=rows-1;i>=1;i--){
    //     for(j=1;j<=i;j++){
    //         printf("*");
        // }
        // printf("\n");
    // }
}