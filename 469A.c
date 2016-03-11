#include<stdio.h>
#include<stdlib.h>
int cmpfunc(const void * a, const void * b)
{
	return(*(int*)a - *(int*)b);
}
int main()
{
	int n,t1,t2,i,k=0,l=0,m=0i,flag=0;
	scanf("%d",&n);
	scanf("%d",&t1);
	int a[t1];
	for(i=0;i<t1;i++)
		scanf("%d",&a[i]);
	scanf("%d",&t2);
	int b[t2];
	for(i=0;i<t2;i++)
		scanf("%d",&b[i]);
	qsort(a,t1,sizeof(int),cmpfunc);
	qsort(b,t2,sizeof(int),cmpfunc);
	for(i=1;i<=n;i++)
	{
		if(a[k]==i && b[l]==i)
		{
			k++;
			l++;
		}
		else if(a[k]==i)
		{
			k++;
		}
		else if(b[l]==i)
		{
			l++;
		}
		else
		{
			flag = 1;
		}
	}
	if(flag==0)
		printf("I become the guy.\n");
	else
		printf("Oh, my keyboard!\n");
	return 0;
}