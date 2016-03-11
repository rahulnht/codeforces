#include<stdio.h>
int main()
{
	int c;
	while((c = getchar())!='\n')
	{
		if(c=='H' || c=='Q' || c=='9')
		{
			c = -2;
			break;
		}
	}
	if(c==-2)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}