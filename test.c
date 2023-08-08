#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define PI 3.14159265
 

int main(void)
{
   
   int i , n=100;
   double x[101],y[101],dy[101], h,a=0.0, b=2*PI;
    
   h = (b-a)/n;
   printf("\"X\",\"f(x)\",\"f\'(x)\"\n");
   
   x[0] = a;
   y[0] = sin(x[0]);
  // printf("%lf,%lf,%lf\n",x[0],sin(x[0]),dy[0]);

   for(i=1;i<n;i++)
   {

     x[i] = x[i - 1] + h;
     y[i] = sin(x[i]);

   }
   x[n] = b;
   y[n] = sin(x[n]);

   dy[0] = (y[1]-y[0])/(x[1]-x[0]);
   for(i=1;i<n;i++) 
   {
     dy[i] = (y[i+1]-y[i-1])/(x[i+1]-x[i-1]);
     
   }
       
   dy[n] = (y[n]-y[n-1])/(x[n]-x[n-1]);
   for(i=0;i<=n;i++)
     printf("%lf,%lf\n",y[i],dy[i]);
    
}

