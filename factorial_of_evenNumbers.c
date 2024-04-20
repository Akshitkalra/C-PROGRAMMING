#include<stdio.h>

int main(){

    int x,fact=1,n;

    printf("Enter a number to find factorial: ");
    scanf("%d",&n); 
    if(n%2==0){
        for(x=1;x<=n;x++)
        fact=fact*x;
        printf("Factorial of the number is %d",fact);
    } 
    else{
        printf("Number is not even");
    }
    
return 0;

}