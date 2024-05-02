#include <stdio.h>
main(){
    int a;
    int Fact=1;
    printf("Enter any value:");
    scanf("%d",&a);
    for(int b=1;b<=a;b++){
Fact=Fact*b;
printf("%d\n",Fact);
    }
}