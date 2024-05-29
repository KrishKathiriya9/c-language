#include<stdio.h>
main(){

char arr[5]="KRISH";
char *ptr[5];

for(int i=0;i<=4;i++){
    ptr[i]=&arr[i];
printf("%u %c\n",ptr[i],*ptr[i]);
}


}