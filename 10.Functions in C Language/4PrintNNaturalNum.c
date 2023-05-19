#include<stdio.h>
void printN(int n)
{   int i;
    for(i=1;i<=n;i++)
    {
        printf("%d ",i);
    }
}
int main() {
int n;
printf("Enter value of n: ");
scanf("%d",&n);
printN(n);
return 0;
}