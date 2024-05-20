#include<stdio.h>
int main(){
    char nam[100];
    printf("Enter your name:");
    gets(nam);
    printf("%d",strlen(nam));

    return 0;
}