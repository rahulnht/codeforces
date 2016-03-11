#include<stdio.h>
int main()
{
    unsigned long long int n,m,temp,time=0,i,curpos=1;
    scanf("%llu %llu",&n,&m);
    for(i=0;i<m;i++)
    {
        scanf("%llu",&temp);
        if(curpos<=temp)
            time+=temp-curpos;
        else
            time+=n-curpos+temp;
        
        curpos=temp;
    }
    printf("%llu\n",time);
    return 0;
}