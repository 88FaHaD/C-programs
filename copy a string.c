// copy a string
#include<stdio.h>
int main()
{
	char c[100],a[100];
	printf("enter a string");
	gets(c);
	int i;
	i=0;
	while(c[i]!='\0')
	{
		a[i]=c[i];
		i++;
	}
	a[i]='\0';
	puts(a);
}
