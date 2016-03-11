#include<stdio.h>
#include<string.h>
int main()
{
	int c,x=0;
	while((c=getchar())!='\n')
	{
		if(x==0)
			putchar(toupper(c));
		else
			putchar(c);
		x++;
	}
	putchar(c);
	return 0;
}