#include<stdio.h>
int main()
{
    int n,i,max=0,min=101,posmax,posmin,temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&temp);
        if(temp>max)
        {
            posmax=i+1;
            max=temp;
        }
        if(temp <= min)
        {
            posmin=i+1;
            min=temp;
        }
    }
    if(posmax>posmin)
        temp = -1;
    else
        temp = 0;
    temp += ((posmax-1)+(n-posmin));
    printf("%d\n",temp);
    return 0;
}