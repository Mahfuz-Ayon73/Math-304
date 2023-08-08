#include<stdio.h>
#include<time.h>
#include<math.h>

int palindrome_checker(char str[])
{
    int i,len = length_finder(str);
    for(i=0;i<len;i++)
    {
       if(str[i] != str[len -i-1])
       printf("Not palindrome");
       return -1;
    }
    printf("palindrome");
    return 1;

}
void binary_print(int num)
{
  int r,q,i,j,arr[num];
   for(i=0;i<pow(2,num);i++)
   {
     q = i;
      for(j=0;q;j++)
     {
       arr[j] = q % 2;
       q = q / 2;
     }
     for(j=0;j<num;j++)
      printf("%d",arr[num-1-j]);
     printf("\n");
   }

}
void string_concate(char str1[],char str2[])
{
   int i,j,len1 = length_finder(str1),len2 = length_finder(str2);
   char str3[len1+len2+1];
   for(i=0;i<len1;i++)
   {
      str3[i] = str1[i];
   }
   for(i=0;i<len2;i++)
   {
      str3[len1 + i] = str2[i];
   }
   str3[len1+len2] = '\0';

   printf(str3);
}
int string_checking(char str[])
{
   int i;
   for(i=0;str[i] != '\0';i++)
   {
      if(str[i] != '0' && str[i] != '1')
      {
         printf("Not Equal!");
         return ;
      }
   }
   printf("Equal!");
   return 1;
}

int length_finder(char str[])
{
   int i;
   for(i=0;str[i] != '\0';i++);
   return i;
}

int main()
{
   srand("NULL");
   char string[5][22];

   int i,j,size,check;

  /*for(i=0;i<5;i++)
   {
     size = (rand() % 20) + 1;
     for(j=0;j<size;j++)
     {
       string[i][j] = (rand() % 2) + '0';
     }
     string[i][size] = '\0';
   }

    for(i=0;i<5;i++)
      printf("%s\n",string[i]);*/


    //string_checking("0");
   // printf("\n");
   /* for(i=0;i<5;i++)
    {
       printf("The length of %d string is %d\n",i+1,length_finder(string[i]));
    }
    printf("\n");
   // string_concate("111","000");*/

  // binary_print(3);
  palindrome_checker("111");


}
