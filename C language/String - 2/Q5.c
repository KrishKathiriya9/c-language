#include<stdio.h>
 int main(){
    char firstname[100]="Krish";
    char lastname[100]="Kathiriya";
    char fullname[100];
    strcpy(fullname,strcat(firstname,lastname));
    puts(fullname);
    return 0;
}