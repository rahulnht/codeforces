#include<stdio.h>
int main()
{
	int p,q,r,l,x[1001]={0},z[1001]={0},a,b,bx,bz,flag,final=0,i;
	scanf("%d %d %d %d",&p,&q,&l,&r);
	for(i=0;i<p;i++)
	{
		scanf("%d %d",&a,&b);
		for(a;a<=b;a++)
			z[a]=1;
	}
	bz= b;
	for(i=0;i<q;i++)
	{
		int a,b;
		scanf("%d %d",&a,&b);
		for(a;a<=b;a++)
			x[a]=1;
	}
	bx=b;
	for(l;l<=r;l++)
	{
		flag = 0;
		for(i=0;(i<=bx && i+l<=bz);i++)
		{
			if(x[i]==z[i+l] && x[i]==1)
			{
				flag = 1;
				break;
			}
		}
		if(flag)final++;
	}
	printf("%d\n",final);
	return 0;
}