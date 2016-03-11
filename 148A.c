#include<stdio.h>
int main()
{
	int k,l,m,n,d,x=0;
	scanf("%d\n%d\n%d\n%d\n%d",&k,&l,&m,&n,&d);
	while(d>0){
		if(d%k==0||d%l==0||d%m==0||d%n==0)
			x++;
		d--;
	}
	printf("%d\n",x);
	return 0;
}