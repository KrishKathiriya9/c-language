#include<stdio.h>
int *min(int *n1,int *n2){
    if(*n1>*n2){
        return n2;

    }else{
        return n1;
    }
}
void main(){

    int a,b;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    
    
    printf("min value is:%d",*min(&a,&b));
}