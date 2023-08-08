#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define f(x) ((x*x*x) + 4*x*x -10.0)
#define EPS 10.0e-6


int main(void)
{
   double a,b,c;

   int i,n = 100;

    a = 1.25 , b = 1.5 , x0;

    if(f(a)*f(b) > 0)
    {
     printf("[%lf,%lf] : No Root.....\n",a,b);
     exit(0);  
    }

    for(i=1;i<n;i++)
    {
     // get Root
     c = (a+b)/2;
     printf("%3d %lf %lf %lf %lf %lf %lf\n",i,a,b,c,f(a),f(b),f(c));

      if(fabs(f(c)) < EPS)
      {
        printf("Root(BS) = %16.9lf\n",c);
      }
    }
}

