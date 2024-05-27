#include<stdio.h>


int fact(int n){
    if(n==0||n==1){
        return 1;
    }else{return n*fact(n-1);}
}







main(){
    int n;
    printf("Enter the factorial of number:");
    scanf("%d",&n);
    
    
printf("%d",fact(n));
}
