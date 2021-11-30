// number palendrome or not / also reverse
#include<stdio.h>
int main()
{
	int a,sum=0,r,temp;

	printf("enter a number ");
	scanf("%d",&a);
		temp=a;
	while(a!=0)   // reverse
	{
		r = a % 10;
		sum=sum*10+r;
		a=a/10;
	}
	a=temp;
	if(a==sum)
	
		printf("the number is palindrome ");
		
	else
	printf("not palindrome");
}
