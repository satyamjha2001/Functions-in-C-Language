#include<stdio.h>
int fact(int);
int main() {
int n;
printf("Enter a number: ");
scanf("%d",&n);
if(fact(n))
printf("Factorial = %d",fact(n));
else
printf("Enter valid value");
return 0;
}
int fact(int n)
{   if(n>0)
{
    int f=1;
    while(n>1)
    {
        f*=n;
        n--;
    }
    return f;
}
return 0;
}