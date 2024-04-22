#include <stdio.h>
main(){
float a,b,c,e;

printf("enter the first grade:");
scanf("%f",&a);

printf("enter the second grade:");
scanf("%f",&b);

printf("enter the third grade:");
scanf("%f",&c);
e=a+b+c;
printf("average of grades:%f",e/3);
}