#include<stdio.h>
int main()
{
	int a,b,sum=0,temp=0,temp1=0;
	scanf("%d %d",&a,&b);
	while(a!=0)
	{
		sum += a;
		a+=temp1;
		temp = a/b;
		temp1 = a%b;
		a = temp;
	}
	printf("%d\n",sum);
	return 0;
}