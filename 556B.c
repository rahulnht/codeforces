#include <stdio.h>
#include <stdlib.h>
int main()
{
    int l=0,i,count=0,temp=0;
    scanf("%d",&l);
    int a[l];
    for(i=0;i<l;i++)
        scanf("%d",&a[i]);
    int rotfac = l - a[0];
    if(rotfac==l)
        rotfac=0;
    int clockcount = -1;
    for(i=1;i<l;i++)
    {
        rotfac = rotfac*clockcount;
        temp = (a[i]+rotfac);
        if(temp<0)
            temp += l;
        else if (temp>=l)
            temp -= l;
        if(temp!=i)
            break;
    }
    if(i==l)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}