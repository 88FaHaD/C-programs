//  to store the value of greater integer in c :
#include<stdio.h>
void main()
{ 
int a,b,c;
printf("Enter two integers ");
scanf("%d%d",&a,&b);
c=a>b? a:b;
printf("c=%d",c);
}
