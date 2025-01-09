#include <stdio.h>
int TOH(int n)
{
    if (n == 1)
        return 1;
    else
        return 2 * TOH(n - 1) + 1;
}
void main()
{
    int n;
    printf("Enter the number of Disks:");
    scanf("%d", &n);
    printf("Number of moves required is %d", TOH(n));
}