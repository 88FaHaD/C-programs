// ackerman function using recursion
#include<stdio.h>
int ack(int,int);
int main()
{
	int m,n;
	printf("Enter two integers");
	scanf("%d %d",&m,&n);
	printf("the answer is %d ",ack(m,n));
	return 0;
}
int ack(int m,int n)
{
	if(m==0)
	return n+1;
	else if(m>0 && n==0)
	return ack(m-1,1);
	else if(m>0 && n>0)
	return ack(m-1 ,ack(m,n-1));
}
