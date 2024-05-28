#include<stdio.h>


void swap (int *n1,int *n2){
    int *a;
    a=n1;
    n1=n2;
    n2=a;
    printf("%d %d",n1,n2);

}


main(){
int a=81;
int b=99;
swap(&a,&b);




}