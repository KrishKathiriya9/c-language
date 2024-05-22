#include<stdio.h>
dividenum(int a,int b){
    if(b==0){
        printf("zero is not allowed");
    }
    int ans=a/b;
    printf("Quotient is:%d",ans);
}



void main(){

int a,b;
printf("Enter value of dividend:");
scanf("%d",&a);
printf("Enter value of divisor:");
scanf("%d",&b);

dividenum(a,b);



}