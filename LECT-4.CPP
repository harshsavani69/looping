#include<stdio.h>
#include<conio.h>
main()
{
	int n;
	clrscr();
	printf("enter number=");
	scanf("%d",&n);
	while(n>=1)
	{
		printf("%d\t",n);
		n--;
	}
	getch();
}