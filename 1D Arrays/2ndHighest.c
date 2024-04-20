#include<stdio.h>
void main(){
    int a[10],i,highest,secondhighest;
    
    for(i=0;i<10;i++){
        printf("Enter Elements:");
        scanf("%d",&a[i]);   
    }
    for(i=0;i<10;i++){
        if(a[i]>a[i-1]){
            secondhighest=highest;
            highest=a[i];
        }
        else if(a[i]>secondhighest && a[i]!=secondhighest){
            secondhighest=a[i];
        }
    }
    printf("Secondhighest number is:%d\n",secondhighest);
    printf("This is highest:%d",highest);
}