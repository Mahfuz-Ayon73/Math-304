#include<stdio.h>
int main()
{
  int i,len;
  char str[100],state,traverse[100];
  printf("Enter the string:");
  gets(str);

  for(i=0;str[i];i++);
  len = i;

  state = 'a';
  printf("The starting state is 'a'\n");
  for(i=0;i<len;i++)
  {

    if(state == 'a')
    {

     if(str[i] == '0')
    {
       state = 'b';
       traverse[i] = 'b';
     }
     else if(str[i] == '1')
     {
       state = 'a';
       traverse[i] = 'a';
     }

    }
    else if(state == 'b')
    {

     if(str[i] == '0')
     {
       state = 'c';
       traverse[i] = 'c';
     }
     else if(str[i] == '1')
     {
       state = 'a';
       traverse[i] = 'a';
     }

    }
    else if(state == 'c')
    {
      if(str[i] == '0')
     {
       state = 'c';
       traverse[i] = 'c';
     }
     else if(str[i] == '1')
     {
       state = 'a';
       traverse[i] = 'a';
     }

    }



  }
  for(i=0;str[i];i++)
    printf("%c",traverse[i]);

  if(traverse[len-1] == 'c')
     printf("\nAccept\n");

  else
     printf("\nNot Accepted");

}
