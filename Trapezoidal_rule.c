#include<stdio.h>
#include<math.h>

#define f(x)  ((x*x) + 1)

int main()
{
   double a = 0.0 , b = 2.0 ;

   int N = 10;

   double h = (b - a)/N ,area;

   int i ;

   double xi[N + 1] , fxi[N + 1] ;

   xi[0] = a , xi[N] = b;

   for(i=1;i<=N;i++)
   {
     xi[i] = xi[0] + (i * h);
   }

   area = f(xi[0]) + f(xi[N]);

   for(i=1;i<N;i++)
   {
    area = area + 2*f(xi[i]);
   }

   printf("%lf",(area*h)/2);

}