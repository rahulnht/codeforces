#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
	int c,flag=0,l;
	char word[101];
	int i = 0;
	for(c = getchar();c!='\n';c=getchar())
	{
		word[i++] = c;
		if(c<=90)
			flag++;
	}
	word[i]='\0';
	l = i;
	if(flag==l)
	{
		for(i=0;i<l;i++)
			printf("%c",tolower(word[i]));
		printf("\n");
	}
	else if(flag ==l-1 && word[0]>90)
	{
		printf("%c",toupper(word[0]));
		for(i=1;i<l;i++)
			printf("%c",tolower(word[i]));
		printf("\n");

	}
	else
		printf("%s\n",word);
	return 0;
}