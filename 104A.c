#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n<=10 || n>21)
	{
		printf("0\n");
	}
	else if(n==21||n<20)
	{
		printf("4\n");
	}
	else
	{
		printf("15\n");
	}
	return 0;
}