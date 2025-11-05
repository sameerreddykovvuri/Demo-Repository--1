#include <stdio.h>
int main()
{
    int n, r = 0, s = 0;
    printf("\nEnter n value: ");
    scanf("%d", &n);
    while (n > 0)
    {
        r = n % 10;
        s = s + r;
        n = n / 10;
    }
    printf("\nSum of digits = %d", s);
    return 0;
}
