#include <stdio.h>
main(){
    float c;
    printf("The temperature in Celcius:");
    scanf("%f",&c);
    float f;
    f=(c*9/5)+32;
    printf("The temperature in Fahrenheit:%f",f);
}