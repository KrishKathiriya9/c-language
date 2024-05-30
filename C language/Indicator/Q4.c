#include <stdio.h>

void swap(int *a, int *b, int *c) {
    int i = *a;
    *a = *b;
    *b = *c;
    *c = i;
}

 main(){

    int a,b,c;
    
 printf("Enter First number:");
 scanf("%d",&a);
 printf("Enter second number:");
 scanf("%d",&b);
 printf("Enter third number:");
 scanf("%d",&c); 
    
    swap(&a,&b,&c);
    printf("swap number:%d\n",a);
    printf("swap number:%d\n",b);
    printf("swap number:%d\n",c);

    
}