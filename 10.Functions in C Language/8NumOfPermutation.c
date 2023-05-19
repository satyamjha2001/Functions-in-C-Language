#include <stdio.h>
long long int fact(long long int);
long long int permutation(long long int n, long long int r);
int main()
{
    long long int n, r;
    printf("Enter two number n and r to find arrangements: ");
    scanf("%lld%lld", &n, &r);
    if (permutation(n, r))
        printf("Permutation (nPr) = %lld", permutation(n, r));
    else
        printf("Please enter n>=r>=0 values");
    return 0;
}
long long int fact(long long int n)
{
    int f = 1;
    while (n > 1)
    {
        f *= n;
        n--;
    }
    return f;
}
long long int permutation(long long int n, long long int r)
{
    long long int a = 0;
    if ((n >= r) && (n >= 0) && (r >= 0))
    {
        a = fact(n) / fact(n - r);
        return a;
    }
    return 0;
}