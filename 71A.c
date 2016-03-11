#include<stdio.h>
#include<string.h>
int main()
{
	int t,l;
	scanf("%d",&t);
	while(t!=0)
	{
		char s[100];
		scanf("%s",&s);
		l = strlen(s);
		if(l>10)
			printf("%c%d%c\n",s[0],l-2,s[l-1]);
		else
			printf("%s\n",s);
		t--;
	}
	return 0;
}