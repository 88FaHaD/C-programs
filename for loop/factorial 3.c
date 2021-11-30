// find factorial of a number:
// eg:4=4*3*2*1 :
 #include<stdio.h>
 int main()
 {
 	int a,n,f=1;
 	printf("Enter a number ");
 	scanf("%d",&n);
 	for(a=n;a>=1;a--)
 	{
 		f=f*a;
	 }
	 printf("Factorial of the number is %d",f);
	 return 0;
 }
