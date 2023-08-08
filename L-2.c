#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define f(x) ((x*x*x) + 4*x*x -10.0)
#define EPS 10.0e-6


void Root_Finding(double a,double b,int n)
{

   int i;
   double c;
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

         
        if(f(a)*f(c) < 0)b = c;

        else a = c;

    

      if(fabs(f(c)) <= EPS)
      {
        printf("Root(BS) = %lf\n",c);
        exit(0);
      }

    }

}

void False_Position(double a,double b,int n)
{
   int i;
   double c;
   if(f(a)*f(b) > 0)
    {
     printf("[%lf,%lf] : No Root.....\n",a,b);
     exit(0);  
    }
   
    printf("Iter    a       b      c         f(a)     f(b)      f(c)\n");
    for(i=1;i<n;i++)
    {
     // get Root
     c =  ( a*f(b) - b*f(a) ) / ( f(b) - f(a) );
     printf("%3d %lf %lf %lf %lf %lf %lf\n",i,a,b,c,f(a),f(b),f(c));

        if(fabs(f(c)) <= EPS)
      {
        printf("Root(FS) = %16.9lf\n",c);
        exit(0);
      }
         
        if(f(a)*f(c) < 0)b = c;

        else a = c;

      

    }
}

double Secant_Method(double a,double b,int n)
{
   int i;
   double c;
   
    printf("Iter    a       b      c         f(a)     f(b)      f(c)\n");
    for(i=1;i<n;i++)
    {
     // get Root
     c =  ( a*f(b) - b*f(a) ) / ( f(b) - f(a) );
     printf("%3d %lf %lf %lf %lf %lf %lf\n",i,a,b,c,f(a),f(b),f(c));

        if(fabs(f(c)) <= EPS)
      {
        return c;
      }
     a = b;
     b = c;
           
    }
      
}

int main(void)
{
   
   // Root_Finding(1.25,1.5,100);
    //False_Position(1.25,1.5,100);

    printf("Root(SM):%lf",Secant_Method(1.25,2.0,100));
}

