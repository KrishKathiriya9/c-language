#include<stdio.h>
main(){
    int x,y;
    printf("Enter the size of row:");
    scanf("%d",&x);
    printf("Enter the size of col:");
    scanf("%d",&y);
    int arr[x][y];
    for(int a=0;a<x;a++){
        for(int b=0;b<y;b++){
            printf("Enter elements[%d][%d]:",a,b);
            scanf("%d",&arr[a][b]);
        }
    }
    for(int a=0;a<x;a++){
        for(int b=0;b<y;b++){
           
             printf("%d",arr[b][a]);           
            
        }
        printf("\n");
    }
}