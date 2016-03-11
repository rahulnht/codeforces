#include<stdio.h>
#include<stdlib.h>
int cmpfunc(const void *a,const void *b)
{
    return ( *(int *)a - *(int *)b );
}
int main()
{
    int n,i;
    int *a;
    unsigned long long int sum=0;
    scanf("%llu",&n);
    a = malloc((n+10)*sizeof(int));
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    qsort(a,n,sizeof(int),cmpfunc);
    for(i=0;i<n;i++)
        sum += (long long int)(i+2)*a[i];
    sum -= a[n-1];
    printf("%lld\n",sum);
    return 0;
}