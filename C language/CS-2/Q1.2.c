#include <stdio.h>
main()
{
    int a, b, c;
    printf("Enter the value of First number:");
    scanf("%d", &a);
    printf("Enter the value of second number:");
    scanf("%d", &b);
    printf("Enter the value of Third number:");
    scanf("%d", &c);
    if (a > b)
    {
        if (a > c)
        {
            printf("The Maximum value is:%d", a);
        }
        else
        {
            printf("The Maximum value is:%d", c);
        }
    }
    else
    {
        if (b > c)
        {
            printf("The Maximum value is:%d", b);
        }
        else
        {
            printf("The Maximum value is:%d", c);
        }
    }
}