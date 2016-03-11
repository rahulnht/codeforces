#include<stdio.h>
int main()
{
    int crime=0,n,police=0,temp;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&temp);
        if(temp==-1 && police==0)
            crime++;
        else if(temp == -1 && police>0)
            police--;
        else
            police+=temp;
    }
    printf("%d\n",crime);
    return 0;
}