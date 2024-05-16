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
            printf("Enter element[%d][%d]:",a,b);
            scanf("%d",&arr[a][b]);
        }
        printf("\n");
    }
     for(int a=0;a<r;a++){
        for(int b=0;b<c;b++){
            if(arr[a][b]%2!=0){
                sum = sum  + arr[a][b];

            }
            
        }
        
        printf("\n");
    }
    printf("Sum of all odd:%d\t",sum);
            

}