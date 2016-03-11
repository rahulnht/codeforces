#include<stdio.h>
#include<stdlib.h>
int main()
{
    int s,n,i,flag=0;
    scanf("%d %d",&s,&n);
    int *a,*b;
    a = malloc(n*sizeof(int));
    b = malloc(n*sizeof(int));
    for(i=0;i<n;i++)
        scanf("%d %d",&a[i],&b[i]);
    while(flag!=1)
    {
        flag=1;
        for(i=0;i<n;i++)
        {
            if(s>a[i] && a[i]!=-1)
            {
                a[i]=-1;
                s+=b[i];
                flag=0;
            }
        }
    }
    for(i=0;i<n;i++)
        if(a[i]!=-1)
            break;
    if(i==n)
        printf("YES\n");
    else
        printf("NO\n");
    free(a);
    free(b);
    return 0;
}