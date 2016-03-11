#include<stdio.h>
int isprime(int n)
{
    int i;
    for(i=2;i*i<=n;i++)
        if(n%i==0)
            return 1;
    return 0;
}
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=4;i<n-4;i++)
    {
        if(isprime(i) && isprime(n-i))
        {
            printf("%d %d\n",i,n-i);
            break;
        }
    }
    return 0;
}