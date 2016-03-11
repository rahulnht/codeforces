#include<stdio.h>
int gcd(int x,int y)
{
	if(x==0)return y;
	return gcd(y%x,x);
}
int main()
{
	int a,b,n,i;
	scanf("%d %d %d",&a,&b,&n);
	for(i=0;n>0;i++)
	{
		if(i%2==0)
			n = n - gcd(a,n);
		else
			n = n - gcd(b,n);
	}
	if(i%2==1)
		printf("0\n");
	else
		printf("1\n");
	return 0;
}