#include<stdio.h>
int main()
{
	int n,a,b,flag,max;
	scanf("%d",&n);
	flag = 0;
	max = 0;
	while(n!=0)
	{
		scanf("%d %d",&a,&b);
		flag = flag + b - a;
		if(max < flag)
			max = flag;
		n--;
	}
	printf("%d\n",max);
	return 0;
}