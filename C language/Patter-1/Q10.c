#include<stdio.h>
main(){
    for(int a=65;a<=69;a++){
        for(int b=65;b<=a;b++){
            printf("%c\t",b);
        }
        printf("\n");
    }
}