#include<stdio.h>

int main(){
    for(int a=1; a<=5; a++){
        for(int s=1; s<=a; s++){
            printf(" ");

        }
        for(int f=5; f>=a; f--){
            printf("%d",f);
        }
        printf("\n");
    }
}