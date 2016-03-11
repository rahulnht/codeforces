#include<stdio.h>
int main()
{
    long long int n,count=0,temp=0;
    scanf("%lld",&n);
    n += (((n-1)*n*(n+1))/6);
    printf("%lld\n",n);
    return 0;
}