#include <stdio.h>
int fact(int n)
{
    if (n == 0)
        return 1;
    else
        return n * fact(n - 1);
}
void main()
{
    int n;
    while (1)
    {
        printf("Enter a number (0-15):");
        scanf("%d", &n);
        if (n > 15)
        {
            printf("OPPS! This is beyond my computational limits \n");
            printf("Please try again with a number between 0-15 \n");
        }
        else
        {
            printf("Factorial of %d is %d ", n, fact(n));
            break;
        }
    }
}
