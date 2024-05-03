#include <stdio.h>
main(){
    int a,b;
    b=0;
    printf("Enter any number:");
    scanf("%d",&a);
    do{
        a=a/10;
        b++;
    }while (a!=0);
    printf("Total number of digit:%d",b);
  
    
}