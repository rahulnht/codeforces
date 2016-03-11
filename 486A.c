#include<stdio.h>
int main()
{
    long long int n;
    scanf("%lld",&n);
    if(n%2)
        n = -1 * (n+1)/2 ;
    else
        n = n/2;
    printf("%lld\n",n);
    return 0;
}