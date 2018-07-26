#include<math.h>
#include<conio.h>
#include<stdio.h>
#define f(x) pow(x,3)-4*x-9
/*
double func(double x)
{
    return x*x*x-x*x + 2;
}

void bisection(double a, double b)
{
    if (func(a) * func(b) >= 0)
    {
        printf("You have not assumed right a and b\n");
        return;
    }

    double c = a;
    while ((b-a) >=0.01)
    {

        c = (a+b)/2;

        if (func(c) == 0.0)
            break;

        else if (func(c)*func(a) < 0)
            b = c;
        else
            a = c;

             printf("The value of root is: %lf\n",c);
    }

}


int main()
{
    double a =-100, b = 200;
    bisection(a, b);
    return 0;
}

*/


int main()
{

    float a=0,b=1,mid;
    int counter=1,n;
    printf("Enter no. of times to run");
    scanf("%d",&n);
    while(f(a)*f(b)>0)
    {

        a++;
        b++;
    }
    printf("The value of a and b is %f %f",a,b);
    mid=(a+b)/2;
    printf("the value of a and b is f %f",a,b);
    printf("approx root is %f",mid);

else{
    b=mid;
    mid=(a+b)/2;
    printf("approx root is %f\n",mid);

}
counter++;

return 0;
}
