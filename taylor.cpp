#include<stdio.h>
#include<math.h>
#define f(x) x0+y0
#define f1(x) 1+f(x0)
#define f2(x) f1(x0)

int main()
{

float x0=1,y0=0,x,y;
printf("enter value of x for value of y:");
scanf("%f",&x);
y=y0+((x-x0)*f(x0))+(pow((x-x0),2)*(f1(x0))/2)+(pow((x-x0),3.0)*(f2(x0)))/6;
printf("The value of y is %.05f at x=%f",y,x);

return 0;
}
