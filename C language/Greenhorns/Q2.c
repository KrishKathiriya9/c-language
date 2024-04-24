#include <stdio.h>
main(){
    int HRA,DA,TA;
    int Basesalery=100;

    printf("Enter HRA:");
    scanf("%d",&HRA);
    printf("Enter DA:");
    scanf("%d",&DA);
    printf("Enter TA:");
    scanf("%d",&TA);
    int a=HRA*Basesalery/100;
    int b=DA*Basesalery/100;
    int c=TA*Basesalery/100;
int d=a+b+c+Basesalery;
printf("Rs.%d",d);
}