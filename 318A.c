#include<stdio.h>
int main()
{
    unsigned long long int n,k;
    scanf("%llu %llu",&n,&k);
        if(k<=(n+1)/2)
            printf("%llu\n",(2*k-1));
        else
        {
            k = k - (n+1)/2;
            printf("%llu\n",2*k);
        }
    return 0;
}