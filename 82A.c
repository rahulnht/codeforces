#include<stdio.h>
int main()
{
	int n,s=1,d=0,i;
	scanf("%d",&n);
	while(n>=1)
	{
		d= 0;
		for(i=0;i<5;i++)
		{
			n= n -s;
			if(n<=0)
				break;
			d++;
		}
		s=s*2;
	}
	switch(d)
	{
		case 0:printf("Sheldon\n");
		       break;
		case 1:printf("Leonard\n");
		       break;
		case 2:printf("Penny\n");
		       break;
		case 3:printf("Rajesh\n");
		       break;
		case 4:printf("Howard\n");
		       break;
	}

	return 0;
}