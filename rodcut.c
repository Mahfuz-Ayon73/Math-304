#include<stdio.h>
#define SIZE 1000

int store[SIZE],s[100];

int max(int a, int b)
{
  if(a > b)return a;

  return b;
}

void cutcount(int price[],int n)
{
   int i,j;
   store[0] = 0;
   for(j=1;j<=n;j++)
     {
     int  q = -100;
       for(i=1;i<=j;i++)
         {
           if(q < price[i] + store[j-i])
            {
              q = price[i] + store[j-i];
              s[j] = i;
            }
            store[j] = q;
         }

    }
}

void print_cutrod(int price[],int n)
{
  while(n > 0)
   {
     printf("\n%d ",s[n]);
     n = n - s[n];
   }


}

int bottom_up_cutrod(int price[],int n)
{

  int i,j,q;
    store[0] = 0;

  for(j=1;j<=n;j++){

    q = -100;
    for(i=1;i<=j;i++)
   {
      q = max(q,price[i] + store[j-i]);
   }
   store[j] = q;
}
  return store[n];
}

int rodcut(int price[],int len)
{
   int q = -5,i;

    if(store[len] != -1)
       return store[len];

    if(len == 0)
        q = 0;



   for(i=1;i<=len;i++)
   {
     if(len-i >= 0)
     {
       int temp = price[i-1] + rodcut(price,len - i);
       if(temp > q)
       {
          q = temp;
          s[len] = i;
       }
     }

   }

   store[len] = q;
   return q;

}
int main()
{

  freopen("input.txt","r",stdin);
  int len,i,n;

   for(i=0;i<SIZE;i++)
    store[i] = -1;

  //printf("Enter length of the rod:");
  //scanf("%d",&n);
  scanf("%d",&len);

  int price[len];

  price[0] = 0;
  for(i=0;i<len;i++)
  {
   scanf("%d",&price[i]);
  }




   printf("The maximum profit:%d",rodcut(price,len));
   //printf("The maximum profit:%d",bottom_up_cutrod(price,len));

   print_cutrod(price,len);

}
