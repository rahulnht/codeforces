#include<stdio.h>
#include<stdlib.h>
int cmpfunc(const void *a,const void *b)
{
	return (*(int *)a - *(int *)b);
}
int main()
{
	int x1,x2,x3,x4,a[4],i,j=0,temp;
	for(i=0;i<4;i++)
		scanf("%d",&a[i]);
	qsort(a,4,sizeof(int),cmpfunc);
	temp = a[0];
	for(i=1;i<4;i++)
	{
		if(a[i]!=temp)
		{
			temp = a[i];
			j++;
		}
	}
	printf("%d\n",3-j);
	return 0;
}