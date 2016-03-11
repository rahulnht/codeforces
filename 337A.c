#include<stdio.h>
#include<stdlib.h>
int cmpfunc(const void *a,const void *b)
{
    return *(int *)a - *(int *)b;
}
int main()
{
    int n,m,i,min=1000;
    int *f;
    scanf("%d %d",&n,&m);
    f = malloc(m*sizeof(int));
    for(i=0;i<m;i++)
        scanf("%d",&f[i]);
    qsort(f,m,sizeof(int),cmpfunc);
    for(i=0;i<=m-n;i++)
        if(f[n+i-1]-f[i]<min)
            min = f[n+i-1]-f[i];
    printf("%d\n",min);
    return 0;
}