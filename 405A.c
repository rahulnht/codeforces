#include<stdio.h>
int cmpfunc(const void *a,const void *b)
{
    return (*(int *)a - *(int *)b);
}
int main()
{
    int n,a[100],i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    qsort(a,n,sizeof(int),cmpfunc);
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n");
    return 0;
}