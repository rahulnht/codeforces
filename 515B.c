#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,m,i,B,g,temp,j;
    int a[100]={0};
    int b[100]={0};
    scanf("%d %d",&n,&m);
    scanf("%d",&B);
    for(i=0;i<B;i++)
    {
        scanf("%d",&temp);
        a[temp]=1;
    }
    scanf("%d",&g);
    for(i=0;i<g;i++)
    {
        scanf("%d",&temp);
        b[temp]=1;
    }
    for(i=0;i<=n*m*n*m;i++)
    {
        if(a[i%n])
            b[i%m]=1;
        else if(b[i%m])
            a[i%n]=1;
    }
    for(i=0;i<n;i++)
        if(a[i]==0)
            break;
    for(j=0;j<m;j++)
        if(b[j]==0)
            break;
    if(i==n && j==m)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}