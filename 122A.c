#include<stdio.h>
int main()
{
	int a[14] ={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
	int i,check,f=0;
	scanf("%d",&check);
	for(i=0;i<14;i++)
	{
		if(check%a[i]==0 && check >= a[i])
		{
			f=1;
			break;
		}
	}
	if(f)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}