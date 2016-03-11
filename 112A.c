#include<stdio.h>
#include<string.h>
int main()
{
	char a[102],b[102];
	scanf("%s\n%s",a,b);
	int i,flag = 0,l= strlen(a);
	for(i=0;i<l;i++)
	{
		a[i] = tolower(a[i]);
		b[i] = tolower(b[i]);
		if(a[i]>b[i])
		{
			flag = 1;
			break;
		}
		else if(a[i]<b[i])
		{
			flag = 2;
			break;
		}
		else;
	}
	if(flag==1)
		printf("1\n");
	else if(flag==2)
		printf("-1\n");
	else
		printf("0\n");
	return 0;
}