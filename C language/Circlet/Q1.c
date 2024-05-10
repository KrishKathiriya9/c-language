#include<stdio.h>
main(){
    for(int a=41;a<=45;a++){
        for(int b=41;b<=a;b++){
            printf("%d\t",b);
        }
        printf("\n");
    }
}