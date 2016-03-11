#include<stdio.h>
#include<string.h>
int main()
{
	int c,x=0,a[100];
	while((c=getchar())!='\n')
	{
		int i,flag=0;
		for(i=0;i<x;i++)
		{
			if(c == a[i])
			{
				flag=1;
				break;
			}
		}
		if(flag); 
		else a[x++]=c;
	}
	if(x%2==1)
		printf("IGNORE HIM!");
	else
		printf("CHAT WITH HER!");
	putchar(c);
	return 0;
}