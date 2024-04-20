#include <stdio.h>

void main() {
    int shirt, pant;
    float ps, pp, totalprice;

    printf("Enter number of shirts: ");
    scanf("%d", &shirt);

    printf("Enter number of pants: ");
    scanf("%d", &pant);

    ps = 1000;
    pp = 1500;

    if (shirt == 1 && pant == 1) {
        totalprice = (ps + pp) - (ps + pp) * 0.10;
        printf("Discount is 10%\n");
        printf("Total amount is: %f\n", totalprice);
    }
    else if( shirt ==2 && pant==1){
        totalprice = (2*ps + pp) - (2*ps + pp) * 0.10;
        printf("Discount is 10%\n");
        printf("Total amount is: %f\n", totalprice);

    }
    else if( shirt ==1 && pant==0){
        totalprice = (ps + 0*pp) - (ps + 0*pp);
        printf("No Discount\n");
        printf("Total amount is: %f\n", totalprice);
        }
    else if( shirt ==0 && pant==1){
        totalprice = (0*ps + 1*pp) - (0*ps + 1*pp);
        printf("No Discount\n");
        printf("Total amount is: %f\n", totalprice);
    }
     else if (shirt == 2 && pant == 2) {
        totalprice = (2 * ps + 2 * pp) - (2 * ps + 2 * pp) * 0.20;
        printf("Discount is 20%\n");
        printf("Total amount is: %f\n", totalprice);
    }
     else if (shirt == 3 && pant == 2) {
        totalprice = (3 * ps + 2 * pp) - (3 * ps + 2 * pp) * 0.30;
        printf("Discount is 30%\n");
        printf("Total amount is: %f\n", totalprice);
    }
     else if (shirt == 3 && pant == 3) {
        totalprice = (3 * ps + 3 * pp) - (3 * ps + 3 * pp) * 0.50;
        printf("Discount is 50%\n");
        printf("Total amount is: %f\n", totalprice);
    }
     else {
    totalprice = (shirt * ps + pant * pp) - (shirt * ps + pant * pp) * 0.50;
        printf("Discount is 50%\n");
        printf("Total amount is: %f\n", totalprice);    
    }
}
