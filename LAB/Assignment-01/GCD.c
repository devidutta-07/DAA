#include <stdio.h>
int GCD(int x, int y) // Euclidean algorithm...
{
    if (x % y == 0)
        return y;
    else
        return GCD(y, (x % y));
}
void main()
{
    int x, y;
    while (1)
    {
        printf("Enter two numbers :");
        scanf("%d%d", &x, &y);
        if (x < 0 || y < 0)
            printf("Please...Enter Positive numbers only\n");
        else
        {
            printf("The GCD of %d and %d is %d", x, y, GCD(x, y));
            break;
        }
    }
}