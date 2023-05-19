#include<stdio.h>
float sI(float,float,float);
int main() {
float p,r,t;
printf("Enter principle , rate and time in years to calculate simple interest: ");
scanf("%f%f%f",&p,&r,&t);
printf("%.2f is simple interest.",sI(p,r,t));
return 0;
}
float sI(float p, float r, float t)
{
    return((p*r*t)/100);
}