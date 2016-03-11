#include<stdio.h>
int main()
{
    int n,i=0;
    scanf("%d",&n);
    while(n--)
    {
        int p,q;
        scanf("%d %d",&p,&q);
        if(q-p>1)
            i++;
    }
    printf("%d\n",i);
    return 0;
}