#include<stdio.h>
int main()
{
	int t,n1=0,n2=0,n3=0,n4=0,p;
	scanf("%d",&t);
	while(t!=0)
	{
		scanf("%d",&p);
		if(p==1)
			n1++;
		else if(p==2)
			n2++;
		else if(p==3)
			n3++;
		else if(p==4)
			n4++;
		t--;
	}
	p = n4 + n3 + n2/2 ;
	n1 = n1 - n3;
	if(n2%2==1)
	{
		p++;
		n1=n1-2;
	}
	if(n1>0 && n1%4==0)
		p = p + n1/4;
	else if(n1>0 && n1%4!=0)
		p = p + (n1/4) + 1;
	printf("%d\n",p);
	return 0;
}