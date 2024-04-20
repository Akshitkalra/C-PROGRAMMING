#include<stdio.h>
void main(){
    int a[3][3],i,j,sr,sc;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++){
        sc=sr=0;
        for(j=0;j<3;j++){
            sc=sc+a[j][i];
            sr=sr+a[i][j];
        }
        printf("SR=%d SC=%d\n",sr,sc);
    } 
}