#include <stdio.h>

SumOfSquares(int a)
{
    int sum = 0;

    for (int i = 2; i <= a; i += 2)
    {
        sum += i * i;
    }
    return sum;
}
main()
{
    int a;
    printf("Enter a num:");
    scanf("%d", &a);
    int sum = SumOfSquares(a);
    printf("Sum of squares of is:%d", sum);
}