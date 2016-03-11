#include<stdio.h>
int main()
{
    int i,j,temp;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&temp);
            if(temp)
                break;
        }
        if(temp)
            break;
    }
    temp = abs(2-i) + abs(2-j);
    printf("%d\n",temp);
}