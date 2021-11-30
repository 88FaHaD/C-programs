// length of string
#include<stdio.h>
int main()
{
  char c[100];
  printf("enter a string");
  gets(c);
  int i;
  i=0;
  while(c[i] != '\0')
  {
  	i++;
  }
  printf("length of string is %d",i);
}
