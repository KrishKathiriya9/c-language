#include<stdio.h>
main(){




    char a='K';
    int b=10;
    float c=7.2;
    
    

    char *p1 = &a;
    int *p2 = &b;
    float *p3 = &c;
    
    

printf("character is:     %u %c\n",p1,*p1);
printf(" integer is:      %u %d\n",p2,*p2);
printf(" float is:        %u %f\n",p3,*p3);



}