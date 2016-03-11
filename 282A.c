#include<stdio.h>
int main()
{
	int t,x=0;
	scanf("%d",&t);
	while(t--)
	{
		getchar();
		char word[5];
		scanf("%[^\n]",word);
		if(word[1]==43)
			x++;
		else
			x--;
	}
	printf("%d\n",x);
	return 0;
}