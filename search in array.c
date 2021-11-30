// search an element inside te array
#include<stdio.h>
int main()
{
	int a[5]={2,8,4,6,5,};
	int i,s,flag=0;
	printf("Enter the element to be searched ");
	scanf("%d",&s);
	for(i=0;i<5;i++)
	{
		if(s==a[i])
	   {
	   		flag=1;
		printf("Element found at %d location ",i);
		break;
	   }
	}
	if(flag==0)
	printf("Element not found");
}
