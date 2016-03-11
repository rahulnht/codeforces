#include<stdio.h>
int main()
{
	int c1, c2, c3, c4, n, m, i; 
	scanf("%d%d%d%d", &c1, &c2, &c3, &c4);
	scanf("%d%d", &n, &m);
	int a1,a2,s1=0,s2=0,m1=0,m2=0; 
        for (i = 0; i < n; i++)
	{
        	scanf("%d", &a1);
		if(a1*c1 <= c2)
			s1 = s1 + a1*c1;
		else
			s1 = s1+c2;
	}
	for (i = 0;  i< m; i++)
	{
        	scanf("%d", &a2);
		if (a2*c1 <= c2)
			s2 = s2 + a2*c1;
		else
			s2 = s2 + c2;
	}
	m1 = m2 = c3;
	if(s1<c3)
		m1 = s1;
	if(s2<c3)
		m2 = s2;
	m1 = m1+ m2;           
        if(c4<m1)
	    m1=c4;	
        printf("%d\n", m1);
	return 0;
}