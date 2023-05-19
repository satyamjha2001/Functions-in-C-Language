#include<stdio.h>
int evenOdd(int);
int main() {
int n;
printf("Enter a number: ");
scanf("%d",&n);
printf("%d",evenOdd(n));
return 0;
}
int evenOdd(int n)
{
    if(n%2==0)
    return 1;
    return 0;
}