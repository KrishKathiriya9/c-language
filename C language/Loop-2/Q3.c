#include <stdio.h>
main()
{
    int a;
    printf("Enter any number:");
    scanf("%d", &a);
    int b=1;
    do
    {
        if (b % 2 == 0)
        {
            printf("%d\n", b);
        }
        b++;
    } while (b <= a);
}