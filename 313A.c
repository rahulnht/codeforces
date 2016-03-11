#include<stdio.h>
#define min(x,y) x>y?y:x
int main(i)
{
    long long int n,temp;
    scanf("%lld",&n);
    if(n<0)
    {
        n *= -1;
        temp = (n/10)%10;
        temp = min(temp,n%10);
        n /= 100;
        n*=10;
        n += temp;
        n *= -1;
    }
    printf("%lld\n",n);
    return 0;
}