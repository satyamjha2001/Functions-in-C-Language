#include <stdio.h>
int fact(int);
int comb(int n, int r);
int main()
{
    int n, r;
    printf("Enter two number n and r to find combinations: ");
    scanf("%d%d", &n, &r);
    if(comb(n,r))
    printf("Combination (nCr) = %d", comb(n, r));
    else
    printf("Please enter n>=r>=0 values");
    return 0;
}
int fact(int n)
{
    int f = 1;
    while (n > 1)
    {
        f *= n;
        n--;
    }
    return f;
}
int comb(int n, int r)
{
    int a=0;
    if ((n >= r) && (n >= 0) && (r >= 0))
    {
        a = fact(n) / (fact(n - r) * fact(r));
    return a;
    }
    return 0;
}