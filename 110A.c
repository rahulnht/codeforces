#include<stdio.h>
#include<string.h>
int lucky(int a)
{
	int f=0;
	if(a==0)f=1;
	while(a!=0)
	{
		f = a%10;
		if(f!=4 && f!=7)
		{
			f=1;
			break;
		}
		else f=0;
		a=a/10;
	}
	return f;
}
int main()
{
	int c,x=0,a[100];
	while((c=getchar())!='\n')
		if(c=='4' || c=='7')
			x++;
	if(lucky(x))
		printf("NO");
	else
		printf("YES");
	putchar(c);
	return 0;
}