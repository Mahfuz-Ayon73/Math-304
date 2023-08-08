#include <stdio.h>
#include <stdlib.h>

long long int global_array[1000000];

long long int fibonnaci(int number){
    
    if(number == 0)
    {
	return 0;
    }
    if(number == 1)
    {
	return 1;
    }
    if(global_array[number] != -1)
    {
	return global_array[number];
    }
    long long int q = fibonnaci(number-1) + fibonnaci(number-2);
    global_array[number] = q;

    return q;
    
}
int main()
{
   long long int i,num=93;

    for(i=0;i<1000000;i++)
    {
      global_array[i] = -1;  
    }
    for(i=0;i<num;i++)
	{
          printf("%lld ",fibonnaci(i));
        }
}
