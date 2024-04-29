#include <stdio.h>
main (){
    int a,b,c;
     printf("Enter value of First Number:");
    scanf("%d",&a);
    printf("Enter value of Second Number:");
    scanf("%d",&b);
    printf("Enter value of Third Number:");
    scanf("%d",&c);
    (a>b) ? (a>c) ? printf("The maximum Value is:%d",a) : printf("The maximum Value is:%d",c) :
    (b>c) ? printf("The maximum Number is:%d",b) : printf("The maximum Number is:%d",c);
}