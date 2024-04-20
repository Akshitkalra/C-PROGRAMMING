#include<stdio.h>
void main(){
    int a[2][3],b[2][3],c[2][3],i,j;
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            // printf("Enter elements in 1st Matrix");
            scanf("%d",&a[i][j]);
        }
    }
    printf("Now 2nd matrix\n");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            // printf("Enter elements in 2nd Matrix");
            scanf("%d",&b[i][j]);
        }
    }
    printf("The resultant Matrix is\n");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            c[i][j]=a[i][j]+b[i][j];
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}