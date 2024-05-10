#include<stdio.h>
main(){
    int a;
    printf("Enter any number:");
    scanf("%d",&a);
    if(a%2==0){
        printf("This number is even.");
    } else{
        printf("This number is odd.");
    }
}