#include <stdio.h>
void main()
{ 
int C,D;
printf("Enter two numbers  ");
scanf("%d%d",&C,&D);
printf("\nBefore swapping");
printf("\nC=%d,D=%d",C,D);
C=C+D;
D=C-D;
C=C-D;
printf("\nAfter swapping\nC=%d,D=%d",C,D);
getch();
}

