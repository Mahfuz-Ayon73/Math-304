#include<stdio.h>
#include<math.h>
#define EPS 10.0e-6

#define f(x) ((x*x*x)+(4*x*x)-10)

int main()
{
    double a =  1.25 , b = 1.5 , c;

    int i , n = 100;

    if(f(a)*f(b)>0)
     {
        printf("No root!");
            return 0;
     }
     printf("  a      b     c       f(a)     f(b)      f(c)\n");

     for(i=0;i<100;i++)
     {
        c = (a*f(b) - b*f(a))/(f(b) - f(a));

        printf("  %lf      %lf     %lf       %lf     %lf      %lf\n",a,b,c,f(a),f(b),f(c));

        if(fabs(f(c)) < EPS)
        {
            printf("Root is: %lf",c);
            return 0;
        }
        if(f(a)*f(c) < 0)
          b = c;
        else
          a = c;
     }
}