// #include<stdio.h>
// void main(){
//     int year;
//     for(year=2001;year<=2050;year++){
//         if(year%4==0){
//             if (year%100==0){
//                 if(year%400==0){
//                     // printf("%d\n",year);
//                 }
//             }
//             if(year%3==0 || year%7==0){
//             printf("%d\n",year);
//         }
//             // else{
//             //     // printf("%d\n",year);
//             // }
//         }
//     } 
// }

#include<stdio.h>
void main(){
    int year=2001;
    while(year<=2050){
        if(year%4==0){
            if (year%100==0){
                if(year%400==0){
                    // printf("%d\n",year);
                }
            }
            if(year%3==0 || year%7==0){
            printf("%d\n",year);
        }
            // else{
            //     // printf("%d\n",year);
            // }
        }
    year++;
    } 
    
}