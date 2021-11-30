//dynamic memory allocation using pointers
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,*q;
	int n,i;
	printf("enter the size of the array");
	scanf("%d",&n);
	p=malloc(sizeof(int)*n);
	q=p;
	printf("enter the elements inside the array");
	for(i=0;i<n;i++)
	{
		scanf("%d", p);
		p++;
	}
	printf("the elements are ");
	
		for(i=0;i<n;i++)
		{  
			printf("%d", *q);
			q++;
		}
	// free(p);
	// free(q);    used to dellacate
	
	
	
	
	
	
	
	
	
}
