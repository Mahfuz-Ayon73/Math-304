#include<stdio.h>
#define SIZE 1000

int store[SIZE];

int max(int a, int b)
{
  if(a > b)return a;

  return b;
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
      q = max(q,price[i-1] + rodcut(price,len - i));  
   }

   store[len] = q;
   return q;

}
int main()
{
  int len,i;

   for(i=0;i<SIZE;i++)
    store[i] = -1;

  printf("Enter length of the rod:");
  scanf("%d",&len);

  int price[len];
  
  for(i=0;i<len;i++)
  {
   scanf("%d",&price[i]);
  }


 
  
   printf("The maximum profit:%d",rodcut(price,len));

}
