#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,m,i;
    scanf("%d %d",&n,&m);
    int result[110];
    for(i=1;i<=n;i++)
        result[i]=0;
    while(m--)
    {
        int max=-1,vote,win;
        for(i=1;i<=n;i++)
        {
            scanf("%d",&vote);
            if(vote>max)
            {
                max=vote;
                win=i;
            }
        }
        result[win] = result[win]+1;
    }
    int max=-1,finalwin;
    for(i=1;i<=n;i++)
    {
        if(result[i]>max)
        {
            max=result[i];
            finalwin=i;
        }
    }
    printf("%d\n",finalwin);
    return 0;
}