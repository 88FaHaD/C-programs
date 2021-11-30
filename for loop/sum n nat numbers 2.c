//find the sum of n natural numbers (natural numbers are +ive integers starting from 1)
#include<stdio.h>
int main()
{
	int a,n,sum=0;
	printf("enter the  value of n ");
	scanf("%d",&n);
	for(a=1;a<=n;a++)
    {
    	sum=sum+a;
	} 
    printf("sum of n natural numbers is %d",sum);
    return 0;
}
