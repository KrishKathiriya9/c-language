#include<stdio.h>
int *max(int *n1,int *n2){
    if(*n1<*n2){
        return n2;

    }else{
        return n1;
    }
}
void main(){
    int a=9;
    int b=89;
    printf("max value is:%d",*max(&a,&b));
}