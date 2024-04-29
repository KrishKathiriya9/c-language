#include <stdio.h>
main(){
    int a,b,c;
    printf("Enter value of First Number:");
    scanf("%d",&a);
    printf("Enter value of Second Number:");
    scanf("%d",&b);
    printf("Enter value of Third Number:");
    scanf("%d",&c);
    (a<b) ? (a<c) ? printf("Minimum Value is:%d",a) : printf("Minimum value is:%d",c) :
    (b<c) ? printf ("Minimum Value is:%d",b) : printf("Minimum value is:%d",c);
}