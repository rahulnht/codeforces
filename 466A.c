#include<stdio.h>
int main()
{
    int n,m,a,b,sum1;
    scanf("%d %d %d %d",&n,&m,&a,&b);
    sum1 = (n/m)*b + (n%m)*a;
    if(sum1>n*a)
        sum1 = n*a;
    n = ((n/m)+1)*b;
    if(sum1>n)
        sum1=n;
    printf("%d\n",sum1);
    return 0;
}