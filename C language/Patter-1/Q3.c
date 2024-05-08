#include<stdio.h>
main(){
    for(int a=6;a>=1;a--){
        for(int b=6;b>=a;b--){
            printf("%d\t",b);

        }
        printf("\n");
    }
}