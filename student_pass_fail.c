#include<stdio.h>
int main(){
    int marks;
    printf("Enter Marks:");
    scanf("%d", &marks);

// if(marks<=30){
//     printf("fail \n");
// }
// else if(marks>30 && marks <=100)
// {
//     printf("pass");
// }
// else{
//     printf("invalid input");
// }

marks <=30 ? printf("fail \n") : printf("Pass \n");
return 0;
}