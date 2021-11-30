// palindrome using string
#include<stdio.h>
int main()
{
	char c[100];
	printf("enter a string ");
	gets(c);
	int i,l;
	l=0;
	while(c[l]!= '\0')
	{
		l++;
	}
	for(i=0,l=l-1;i<=l;i++,l--)
	{
		if(c[i]!=c[l])
		break;
	}
	if(i<l)
	printf("the string is not palindrome ");
	else
	printf("the string is pallindrom");

}	
