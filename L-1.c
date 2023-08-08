#include<stdio.h>
#include<stdlib.h>
#include<math.h>
# define PI 3.141592653589
int main()
{
   double n = 100,a=0,b=4*PI,h,i,x;
   
   h = (b-a)/n;
   printf("\"x\",\"cos(x)\"\n");
   x = a;
   printf("%lf,%lf\n",x,cos(x));
   
   for(i=1;i<n;i++)
   {
     x = x + h;
     printf("%lf,%lf\n",x,cos(x));

   }
   x = b;
   printf("%lf,%lf\n",x,cos(x));
   

}
