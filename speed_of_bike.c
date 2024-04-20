#include <stdio.h>

int main() {
    int speed_of_bike;

    printf("Enter the speed of the bike: ");
    scanf("%d", &speed_of_bike);

    switch (speed_of_bike) {
        case 0 ... 20:
            printf("Highly safe\n");
            break;
        case 21 ... 40:
            printf("Safe\n");
            printf("Advice: Wear helmet\n");
            break;
        case 41 ... 60:
            printf("Alert\n");
            printf("Advice: Wear helmet and leg guard\n");
            break;
        default:
            printf("Dangerous\n");
            printf("Caution: Online challan\n");
    }

    return 0;
}

// #include <stdio.h>

// int main() {
//     int speed;

//     printf("Enter the speed of the bike: ");
//     scanf("%d", &speed);

//     if (speed <= 20) {
//         printf("Highly safe\n");
//     } else if (speed <= 40) {
//         printf("Safe\n");
//         printf("Advice: Wear helmet\n");
//     } else if (speed <= 60) {
//         printf("Alert\n");
//         printf("Advice: Wear helmet and leg guard\n");
//     } else {
//         printf("Dangerous\n");
//         printf("Caution: Online challan\n");
//     }

//     return 0;
// }
