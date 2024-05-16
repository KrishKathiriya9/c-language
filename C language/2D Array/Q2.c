
#include<stdio.h>
main(){
    int r,c;
    printf("Enter size of row:");
    scanf("%d",&r);
    printf("Enter size of col:");
    scanf("%d",&c);
    float sum=0;
    
    int arr[r][c];
    for(int a=0;a<r;a++){
        for(int b=0;b<c;b++){
            printf("Enetr element[%d][%d]:",a,b);
            scanf("%d",&arr[a][b]);
        }
        printf("\n");
    }
    for(int a=0;a<r;a++){
        for(int b=0;b<c;b++){
            
            sum = sum+arr[a][b];
           
            
        }
         
        printf("\n");
    }
    printf("Sum of Array:%f",sum);
    
        

    
}