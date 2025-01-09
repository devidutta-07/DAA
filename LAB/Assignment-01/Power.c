#include <stdio.h>
int Pow(int x, int y)
{
    if (y == 0)
        return 1;
    else
        return x * Pow(x, (y - 1));
}
void main()
{
    while (1)
    {
        int x, y;
        printf("Enter Base Value :");
        scanf("%d", &x);
        printf("Enter Power Value :");
        scanf("%d", &y);
        if (y < 0)
        {
            printf("Please provide valid inputs....\n");
        }
        else
        {
            printf("Value of %d to the power %d is %d ", x, y, Pow(x, y));
            break;
        }
    }
}