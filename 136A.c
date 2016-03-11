#include<stdio.h>
int main()
{
	int n,i,temp=0;
	scanf("%d",&n);
	int a[n+1];
	for(i=1;i<=n;i++)
	{
		scanf("%d",&temp);
		a[temp] = i;
	}
	for(i=1;i<=n; i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	return 0;
}