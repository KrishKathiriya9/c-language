#include<stdio.h>
cube(int a){
int ans=a*a*a;
printf("cube is%d",ans);
}



void main(){

int a;
printf("Enter the value :");
scanf("%d",&a);
cube(a);
}