#include<stdio.h>
int main()
{
    long long int n,max=1,nmax=0,min=1000000000,nmin=0,temp;
    scanf("%lld",&n);
    while(n--)
    {
        scanf("%lld",&temp);
        if(temp>max)
        {
            max=temp;
            nmax=1;
        }
        else if (temp==max)
            nmax++;
        if(temp<min)
        {
            min=temp;
            nmin=1;
        }
        else if(temp==min)
            nmin++;
    }
    if(max==min)
        printf("0 %lld\n",(nmax-1)*nmin/2);
    else
        printf("%lld %lld\n",max-min,nmax*(nmin));
    return 0;
}