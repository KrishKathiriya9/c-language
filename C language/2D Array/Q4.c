#include<stdio.h>
main(){
    int r,c;
    printf("Enter the size of row:");
    scanf("%d",&r);
    printf("Enter the size of col:");
    scanf("%d",&c);
    int arr[r][c];
    
    for(int a=0;a<r;a++){
        for(int b=0;b<c;b++){
            printf("Enter Element[%d][%d]:",a,b);
            scanf("%d",&arr[a][b]);
        }
        printf("\n");
    }
    for(int a=0;a<r;a++){
        int sum=0;
        for(int b=0;b<c;b++){
            
             sum = sum+arr[b][a];
            
            
        }
       
        printf("Sum of col:%d",sum);
        
        printf("\n");
    }

}