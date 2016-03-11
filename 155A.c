#include<stdio.h>
int main()
{
    int n,temp,max,min,count=0;
    scanf("%d",&n);
    n--;
    scanf("%d",&temp);
    min = max = temp;
    while(n--)
    {
        scanf("%d",&temp);
        if(temp>max)
        {
            max = temp;
            count++;
        }
        else if(temp<min)
        {
            min = temp;
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}