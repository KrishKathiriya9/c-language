#include<stdio.h>
int main(){
    char nam[100];
    printf("Enter your name:");
    gets(nam);
    puts(strlwr(nam));

    return 0;
}