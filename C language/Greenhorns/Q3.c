#include <stdio.h>
main(){
    float a,b,d;
    printf("Enter First angle:");
    scanf("%f",&a);
    
    printf("Enter Second angle:");
    scanf("%f",&b);

   d=180-a-b;
printf("Third angle:%f",d);
}