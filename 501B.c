#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct handle
{
    char old[21];
    char new[21];
};
int check(char a[21],char b[21])
{
    int len = strlen(a);
    int lenv = strlen(b);
    if(len == lenv)
    {
        while(len>0)
        {
            len--;
            if(a[len]!=b[len])
            {
                len = 1000;
                break;
            }
        }
        if(len==1000)
            return 0;
        return 1;
    }
    return 0;
}
int main()
{
    int q,count=0,i;
    struct handle array[1000];
    scanf("%d",&q);
    while(q--)
    {
        char old[21];
        char new[21];
        scanf("%s %s",old,new);
        for(i=0;i<count;i++)
        {
            if(check(old,array[i].new))
            {
                int j;
                for(j=0;j<=strlen(new);j++)
                    array[i].new[j] = new[j];
                break;
            }
        }
        if(i==count)
        {
            int j;
            for(j=0;j<=strlen(new);j++)
                array[i].new[j] = new[j];
            for(j=0;j<=strlen(old);j++)
                array[i].old[j] = old[j];
            count++;
        }
    }
    printf("%d\n",count);
    for(i=0;i<count;i++)
    {
        printf("%s %s\n",array[i].old,array[i].new);
    }
    return 0;
}