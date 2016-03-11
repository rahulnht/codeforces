#include <stdio.h>
#include <stdlib.h>
int main()
{
    int l=0,i,count=0;
    scanf("%d",&l);
    char a[l+1];
    scanf("%s",a);
    for(i=0;i<l;i++)
    {
        if (a[i]=='0')
            count--;
        else
            count++;
    }
    if(count<0)
        count*=-1;
    printf("%d\n",count);
    return 0;
}