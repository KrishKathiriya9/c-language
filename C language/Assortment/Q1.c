#include<stdio.h>
main(){
    int k;
    printf("Enter the array size:");
    scanf("%d",&k);
    int arr[k];
    for(int a=0;a<k;a++){
        printf("Enter element[%d]:",a);
        scanf("%d",&arr[a]);
    }
    for(int a=0;a<k;a++){
        if(arr[a]<0){
            printf("Negative elements of Array:%d",arr[a]);
            printf("\n");
        }
    }
}