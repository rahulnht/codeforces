#include<stdio.h>
int main()
{
	int t,i=0,x=0;
	scanf("%d\n",&t);
	char c[t];
	while(t--)
	{
		c[i] = getchar();
		if(i!=0)
		{
			if(c[i]==c[i-1])
				x++;
		}
		i++;
	}
	printf("%d\n",x);
	return 0;
}