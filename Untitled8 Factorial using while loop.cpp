#include <stdio.h>
int main()
{
    int n, a = 1, p = 1;
    printf("\nEnter n value: ");
    scanf("%d", &n);
    while (a <= n)
    {
        p = p * a;
        a++;
    }
    printf("\n%d factorial is %d", n, p);
    return 0;
}
