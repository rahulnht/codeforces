#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,*a,sumc=0,i,sumac=0,start,end;
    scanf("%d",&n);
    a = malloc(n*sizeof(int));
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    scanf("%d %d",&start,&end);
    start--;
    end--;
    i=start;
    while(i!=end)
    {
        sumc+=a[i];
        i = (i+1)%n;
    }
    i=start;
    while(i!=end)
    {
        i--;
        if(i==-1)
            i=n-1;
        sumac+=a[i];
    }
    if(sumac<sumc)
        sumc = sumac;
    printf("%d\n",sumc);
    free(a);
    return 0;
}