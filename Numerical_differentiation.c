#include<stdio.h>
#include<math.h>

#define f(x) ((x*x)+1)

int main()
{
    double a = 0.0, b = 2.0, h;
    int n = 10 , i;

    h = (b - a)/n;

    double xi[n+1] , y[n+1];

    xi[0] = a;
    for(i=1;i<n+1;i++)
    {
        xi[i] = xi[i-1] + h;
    }
    xi[n] = b;

    for(i=0;i<n+1;i++)
    {
        y[i] = f(xi[i]);
    }

    printf("     xi      fi(x)      fpi(x)\n");

    printf("%0.6lf      %0.6lf      %0.6lf\n",xi[0],y[0],((y[1]-y[0])/(h)));

    for(i=1;i<n;i++)
    {
        printf("%0.6lf      %0.6lf      %0.6lf\n",xi[i],y[i],((y[i+1]-y[i-1])/(2*h)));
    }

    printf("%0.6lf      %0.6lf      %0.6lf\n",xi[n],y[n],((y[n]-y[n-1])/(h)));
}