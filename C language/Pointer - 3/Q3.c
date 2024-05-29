#include<stdio.h>
main(){
    char arr[]="Krish";
 char *ptr;
    ptr=&arr;
    for(int i=0;i<=4;i++){
        printf("%u %c\n",ptr+i,*(ptr+i));
    }
}