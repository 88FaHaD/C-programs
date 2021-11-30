// in built functions of c
#include<stdio.h>
#include<string.h>// header file
int main()
{
	char s[100],c[100];
	int len;
	printf("Enter the string");
	gets(c);
	printf("enter anotherr string");
	gets(s);
//	len=strlen(c); // 1 strlen in built function to determine the length of string
//	printf("length of string is %d", len);
//  strcat(c,s);// 2 strcat means concatenation and stores it in left string  concatenation means jopining the string
//printf("string affter concatenation is %s", c);
 //   strcpy(c,s); // 3 strcpy means to copying contents of one string into another here that means contents of s in c
//    puts(c);
     if (strcmp(c,s)==0) // 4 strcmp is a string comparing function if both are same it will return 0 if they are not same then it will return some other value which is not zero
     	printf("strings are  same");
	 else
	     printf("strings are different");
}
