#include<stdio.h>
int main()
{
    int a[24][60]={0},n,i,j,max=1;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d %d",&i,&j);
        a[i][j]++;
    }
    for(i=0;i<24;i++)
        for(j=0;j<60;j++)
            if(a[i][j]>max)
                max = a[i][j];
    printf("%d\n",max);
    return 0;
}