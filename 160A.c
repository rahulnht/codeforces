#include<stdio.h>
int main()
{
	int t,i,j,k,sum=0,psum=0,temp,x=0;
	scanf("%d",&t);
	int a[t];
	for(i=0;i<t;i++)
	{
		scanf("%d",&a[i]);
		sum = sum+a[i];
	}
	for(i=t-2;i>=0;i--)
	{
		for(j=0;j<=i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	while(sum>=psum)
	{
		x++;
		t--;
		psum = psum+a[t];
		sum = sum-a[t];
	}
	printf("%d\n",x);
	return 0;
}