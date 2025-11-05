#include <stdio.h>
int main()
{
    int n, count = 0, a = 1;
    printf("\nEnter n value: ");
    scanf("%d", &n);
    while (a <= n)
    {
        if (n % a == 0)
        {
            count++;
        }
        a++;
    }
    if (count == 2)
        printf("\n%d is a prime number", n);
    else
        printf("\n%d is not a prime number", n);
    return 0;
}
