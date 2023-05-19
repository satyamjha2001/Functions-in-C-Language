#include <stdio.h>
int find(int n, int d)
{
    while (n > 0)
    {
        if (d == (n % 10))
        {
            return 1;
            break;
        }
        n = n / 10;
    }
    return 0;
}
int main()
{
    int n, d;
    printf("Enter your number and digit to find in number: ");
    scanf("%d%d", &n, &d);
    if (find(n, d))
        printf("Yes");
    else
    {
        printf("No");
    }
    return 0;
}