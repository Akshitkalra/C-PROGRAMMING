#include<stdio.h>
void main(){
    int a[10],even=0,odd=0,i;
    for(i=0;i<10;i++){
        printf("Enter elements:");
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++){
        if(a[i]%2==0){
            even=even+1;
        }
        else{
            odd=odd+1;
        }
    }
    printf("No. of Even Elements are:%d\n",even);
    printf("No. of odd Elements are:%d",odd);
}