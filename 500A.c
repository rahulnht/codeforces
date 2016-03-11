#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,t;
    scanf("%d %d",&n,&t);
    int *a = (int *)malloc((n)*sizeof(int));
    for(i=1;i<n;i++)
        scanf("%d",&a[i]);
    int curpos=1;
    while(curpos!=t && curpos!=n)
        curpos += a[curpos];
    if(curpos==t)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}