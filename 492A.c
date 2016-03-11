#include<stdio.h>
int main()
{
    int n,i=0;
    scanf("%d",&n);
    while(n>=0)
    {
        i++;
        n -= (i*(i+1))/2;
    }
    printf("%d\n",i-1);
    return 0;
}