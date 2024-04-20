#include<stdio.h>
void main(){
    int arr1[5],arr2[5],sumarr[5],i;
    for(i=0;i<5;i++){
        printf("Enter Elements in array1:");\
        scanf("%d",&arr1[i]);
    }
    for(i=0;i<5;i++){
        printf("Enter elements in array2:");
        scanf("%d",&arr2[i]);
    }
    for(i=0;i<5;i++){
       sumarr[i]=arr1[i]+arr2[i];
       printf("Sumarray element at index %d is=%d\n",i,sumarr[i]);
    }
}