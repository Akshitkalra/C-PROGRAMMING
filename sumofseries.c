// #include<stdio.h>
// void main(){
//     int i,a=1,n,s=0,fact=1;
//     printf("Enter number of terms:");
//     scanf("%d",&n);
//     for(i=1;i<=n;i=i++){
        
//         if(i%2 !=0){
//         fact=fact*i;
//         s+=a/fact;
//         a+=2;
//     // for(i=1;i<=n;i=i++){
//     //     s=a/fact;
//     //     a=a+2;
//     }
//     }
//     printf("%d\n",s);
// }
#include<stdio.h>

int main() {
    float n, sum = 0, term = 1;

    printf("Enter the number of terms: ");
    scanf("%f", &n);

    for (int i = 1; i <= n; i++) {
        int factorial = 1;
        for (int j = 1; j <= i; j++) {
            factorial *= j;
        }
        sum = term / factorial;
        term += 2;
    }

    printf("Sum of the series: %f\n", sum);

    return 0;
}
