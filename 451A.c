#include<stdio.h>
int main()
{
    int n,m,points,count=0;
    scanf("%d %d",&n,&m);
    points = n*m;
    while(points>0)
    {
        points -= n+m-1;
        n--;
        m--;
        count++;
    }
    if(count%2)
        printf("Akshat\n");
    else
        printf("Malvika\n");
    return 0;
}