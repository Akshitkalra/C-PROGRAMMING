#include<stdio.h>
void main(){
    int i,j,space,rows=5;
    for(i=1;i<=5;i++){
        for(space=1;space<=rows-i;space++){
            printf(" ");
        }
        for(j=1;j<=(2*i)-1;j++){
            printf("*");
        }
        printf("\n");
    }

    for(i=4;i>=1;i--){
        for(space=1;space<=rows-i;space++){
            printf(" ");
        }
        for(j=1;j<=(2*i)-1;j++){
            printf("*");
        }
        printf("\n");
    }
}