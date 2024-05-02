#include <stdio.h>
main(){
    int a;
    int d=0;
    printf("Enter any value:");
    scanf("%d",&a);
    for(int b=1;b<=a;b++){
d=d+b;
printf("%d\n",d);
    }
}