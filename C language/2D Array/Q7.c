#include<stdio.h>
main(){
    int r,c;
    printf("Enter the size of row:");
    scanf("%d",&r);
    printf("Enter the size of col:");
    scanf("%d",&c);
    int sum=0;
    int array[r][c];
    int digonal=r-1;
    for(int a=0;a<r;a++){
        for(int b=0;b<c;b++){
            printf("Enter the Elements[%d][%d]:",a,b);
            scanf("%d",&array[a][b]);
        }
        printf("\n");
    }printf("\n");

    for(int a=0;a<r;a++){
        for(int b=0;b<c;b++){
           if(a+b==digonal){
sum=sum+array[a][b];
           }
        }
       
        printf("\n");
    }
     printf("Sum of anti-diagonal:%d",sum);
}