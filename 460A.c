#include<stdio.h>
int main()
{
    int n,m,days=0;
    scanf("%d %d",&n,&m);
    while(n!=0)
    {
        days++;
        n--;
        if(days%m==0)
            n++;
    }
    printf("%d\n",days);
    return 0;
}