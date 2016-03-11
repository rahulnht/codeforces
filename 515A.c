#include<stdio.h>
int main()
{
    long long int a,b,s;
    scanf("%lld %lld %lld",&a,&b,&s);
    if(a<0)
        a*=-1;
    if(b<0)
        b*=-1;
    s = s-(a+b);
    if(s<0 || s%2==1)
        printf("No\n");
    else
        printf("Yes\n");
    return 0;
}