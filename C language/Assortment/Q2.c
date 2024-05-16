#include<stdio.h>
main(){
    int r;
    int c;

    printf("Enter the size of row:");
    scanf("%d",&r);
    printf("Enter the size of col:");
    scanf("%d",&c);
    int arr[r][c];
   int  max=arr[0][0];
    for(int a=0;a<r;a++){
        for(int b=0;b<c;b++){
             printf("Enter element[%d][%d]:",a,b);
        scanf("%d",&arr[a][b]);
        }
       
    }
    for(int a=0;a<r;a++){
        for(int b=0;b<c;b++){

            if(max<arr[a][b]){
                max=arr[a][b];
            }
        
        }
       
    }
     printf("Largest num is:%d",max);
     
}