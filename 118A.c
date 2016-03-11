#include<stdio.h>
#include<string.h>
int main()
{
	char p[500],c;
	int k=0;
	scanf("%c",&c);
	while(c!='\n')
	{
		if(c==65 || c==69 || c==73 || c == 79 || c==85 ||c==89 ||c == 97 || c==101 || c==105|| c==111 || c==117 || c==121)
		{}
		else if(c<=90)
		{
			c = c+32;
			p[k] = '.';
			p[k+1] = c;
			k+=2;
		}
		else
		{
			p[k] = '.';
			p[k+1] = c;
			k+=2;
		}
		scanf("%c",&c);
	}
	p[k] = '\0';
	printf("%s\n",p);
	return 0;
}