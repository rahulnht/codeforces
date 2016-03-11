#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(j=1;j<=n;j++,putchar('\n'))
        for(i=j;i<=n*n/2;i+=n)
            printf("%d %d ",i,n*n-i+1);
    return 0;
}