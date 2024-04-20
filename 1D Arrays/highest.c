#include<stdio.h>
void main(){
    int a[10],i,highest;
    
    for(i=0;i<10;i++){
        printf("Enter Elements:");
        scanf("%d",&a[i]);   
    }
    for(i=0;i<10;i++){
        if(a[i]>a[i-1]){
            highest=a[i];
        }
    }
    printf("This is highest:%d",highest);
}