#include<stdio.h>
main(){
    int x=21;
    int *p1;
    int **p2;



    p1=&x;
    p2=&p1;


printf("value of x is:%d\n",**p2);

}