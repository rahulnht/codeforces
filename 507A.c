#include<stdio.h>
#include<stdlib.h>
struct ind{
    int index;
    int days;
};
int main()
{
    struct ind a[105];
    int b[105];
    struct ind temp;
    int n,k,i,j;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i].days);
        a[i].index = i+1;
        b[i]=0;
    }
    for(i=0;i<n;i++)
        for(j=i;j<n;j++)
        {
            if(a[i].days > a[j].days)
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    for(i=0,j=0;i<n;i++)
        if(k-a[i].days>=0)
        {
            b[j++]=a[i].index;
            k -= a[i].days;
        }
    printf("%d\n",j);
    for(i=0;i<j;i++)
        printf("%d ",b[i]);
    return 0;
}