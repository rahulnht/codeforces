#include<stdio.h>
#include<stdlib.h>
int cmpfunc(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}
int main()
{
    int a[12],k,i;
    scanf("%d",&k);
    for(i=0;i<12;i++)
        scanf("%d",&a[i]);
    qsort(a,12,sizeof(int),cmpfunc);
    for(i=0; k>0 && i<12; i++)
        k-=a[11-i];
    if(k>0)
        printf("-1\n");
    else
        printf("%d\n",i);
    return 0;
}