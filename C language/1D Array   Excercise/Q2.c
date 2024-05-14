#include<stdio.h>
main(){
    int n;
    printf("Enter the Size of array:");
    scanf("%d",&n);
    char arr[n];
    for(int a=0;a<n;a++){
        printf("Enter  the value:");
        scanf(" %c",&arr[a]);
    }
    for(int a=0;a<n;a++){
        if(arr[a]== 'a' || arr[a]== 'e' || arr[a]== 'i' || arr[a]== 'o' || arr[a]== 'u' ){
            printf("%c\n",arr[a]);
        }
    }
    
}