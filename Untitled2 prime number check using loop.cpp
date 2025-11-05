#include <stdio.h>
int main()
{
    int count = 0, a, n;
    printf("\nEnter n value: ");
    scanf("%d", &n);
    for (a = 1; a <= n; a++)
    {
        if (n % a == 0)
        {
            count++;
        }
    }
    if (count == 2)
        printf("\n%d is a prime number", n);
    else
        printf("\n%d is not a prime number", n);
    return 0;
}
