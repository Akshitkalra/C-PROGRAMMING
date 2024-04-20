#include<stdio.h>
void main(){
    int a[5],i,s;
    for(i=0;i<5;i++){
        printf("Enter Elements:");
        scanf("%d",&a[i]);
    }
    s=0;
    for(i=0;i<5;i++){
        s=s+a[i];
    }
    printf("Sum is:%d",s);
}