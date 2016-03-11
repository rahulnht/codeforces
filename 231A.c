#include<stdio.h>
int main()
{
	int n,a,b,c,flag;
	scanf("%d",&n);
	flag =0;
	while(n!=0)
	{
		scanf("%d %d %d",&a,&b,&c);
		if((a+b+c)>1)
			flag++;
		n--;
	}
	printf("%d",flag);
	return 0;
}