#include<stdio.h>
void main(){
    int i,j,a[5],b[5];
    for(i=0;i<5;i++){
        printf("Enter elements:");
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++){
        if(a[i]%3==0 && a[i]%5==0){
            printf("%d",i);
        }
        printf("%d",i);
        
    }
    printf("\n");
}