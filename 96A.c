#include<stdio.h>
#include<string.h>
int main()
{
	char c[101];
	int l,i,x0=0,x1=0,flag=0;
	scanf("%s",c);
	l = strlen(c);
	for(i=0;i<=l;i++)
	{
		if(x1>6 || x0>6)
		{
			flag = 1;
			break;
		}
		if(c[i]=='1')
		{
			x0++;
			x1=0;
		}
		else if(c[i]=='0')
		{
			x1++;
			x0=0;
		}
	}
	if(flag == 1)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}