#include<stdio.h>
void main(){
    int i,highest=0,num;
    for(i=0;i<10;i++){
        scanf("%d",&num);
        if(num>highest){
        highest=num;
        }
    }
    printf("highest is %d",num);
}