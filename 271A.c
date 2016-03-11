#include<stdio.h>
#include<string.h>
int lucky(int a)
{
	int f,j[10]={0,0,0,0,0,0,0,0,0,0};
	do
	{
		f = a%10;
		j[f]++;
		if(j[f]>1)
			return 0;
		a=a/10;
	}while(a);
	return 1;
}
int main()
{
	int c;
	scanf("%d",&c);
	while(1)
	{
		c++;
		if(lucky(c))
		{
			printf("%d",c);
			break;
		}
	}
	putchar('\n');
	return 0;
}