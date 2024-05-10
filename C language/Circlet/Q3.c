#include<stdio.h>

int main(){
    for(int a=5; a>=1; a--){
        for(int c=1; c<=a; c++){
            printf(" ");

        }
        for(int b=a; b<=5; b++){
            printf("%d",b);
        }
        printf("\n");
    }
}