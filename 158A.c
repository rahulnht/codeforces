#include<stdio.h>
int main()
{
	int n,k,p,i=0;
	scanf("%d %d",&n,&k);
	int no[n];
	for(p=0;p<n;p++)
	{
		scanf("%d",&no[p]);
		if(no[p]>0 && p<k)
			i++;
	}
	for(p=k;p<n;p++)
	{
		if(no[k-1]==no[p]&&no[k]>0)
			i++;
	}
	printf("%d\n",i);
	return 0;
}