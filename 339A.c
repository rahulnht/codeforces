#include<stdio.h>
#include<string.h>
int main()
{
	char a[101];
	scanf("%[^\n]",a);
	int c = strlen(a),i,n[50],j=0,d,swap;
	for(i=0;i<c;i+=2)
		n[j++]=a[i]-'0';
	for(c=0;c<(j-1);c++)
	{
		for(d=0;d<j-c-1;d++)
		{
			if (n[d]>n[d+1])
			{
				swap=n[d];
				n[d]=n[d+1];
				n[d+1] = swap;
			}
		}
	}
	for(c=0;c<j-1;c++)
		printf("%d+",n[c]);
	printf("%d\n",n[j-1]);
	return 0;
}