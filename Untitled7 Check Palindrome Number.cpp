#include <stdio.h>
int main()
{
    int p, n, r = 0, s = 0;
    printf("\nEnter n value: ");
    scanf("%d", &p);
    n = p;
    while (n > 0)
    {
        r = n % 10;
        s = s * 10 + r;
        n = n / 10;
    }
    if (p == s)
        printf("\nIt is palindrome");
    else
        printf("\nNot a palindrome");
    return 0;
}
