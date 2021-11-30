//switch case :

#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,ans;
	int v;
	printf("enter two integers ");
	scanf("%d%d",&a,&b);
	printf("\nenter 1,2,3 and 4 for addition,multiplication,subtraction and division respectfully");
	scanf("%d",&v);
	switch(v)
	{
		case 1:
			ans=a+b;
			break;
		case 2:
			ans=a*b;
			break;
		case 3:
			ans=a-b;
			break;
		case 4:
			ans=a/b;
			break;
		default:
		printf("incorrect option");	
		break;
	}
	printf("\nthe answer is %d",ans);
}

