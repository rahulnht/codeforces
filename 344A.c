#include<stdio.h>
int main()
{
    int n,count=0;
    char c,temp='A';
    scanf("%d",&n);
    while(n--)
    {
        getchar();
        c = getchar();
        if(c!=temp)
        {
            temp=c;
            count++;
        }
        getchar();
    }
    printf("%d\n",count);
    return 0;
}