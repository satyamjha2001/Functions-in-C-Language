#include<stdio.h>
float areaOfCircle(float);
int main() {
float r;
printf("Enter radius of circle: ");
scanf("%f",&r);
printf("%.2f is area of circle with given radius",areaOfCircle(r));
return 0;
}
float areaOfCircle(float r)
{
    return (3.14*r*r);
}