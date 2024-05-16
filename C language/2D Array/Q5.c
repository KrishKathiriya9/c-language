#include<stdio.h>
main(){
    int r,c;
    printf("Enter the size of row:");
    scanf("%d",&r);
    printf("Enter the size of col:");
    scanf("%d",&c);
    int sum=0;
    int arr[r][c];
    for(int a=0;a<r;a++){
        for(int b=0;b<c;b++){
            printf("Enter the element[%d][%d]:",a,b);
            scanf("%d",&arr[a][b]);
        }
        printf("\n");
    }
    for(int a=0;a<r;a++){
        for(int b=0;b<c;b++){
            if (a==b)
            {
         sum=sum+arr[a][b];
            }
           
           
        }
        
        printf("\n");
    }
     printf("Diagonal:%d",sum);
}