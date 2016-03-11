#include<stdio.h>
int main()
{
    int a = (getchar())-'0';
    int f1,f2,f3=1,f4,i,j;
    f1=2*a;//space
    for(i=0;i<=a;i+=f3)
    {
        if(i==-1)
            break;
        if(i==a)
            f3=-1;
        for(j=0;j<f1;j++)
            putchar(' ');
        for(j=0;j<i;j++)
            printf("%d ",j);
        printf("%d",i);
        for(j=i-1;j>=0;j--)
            printf(" %d",j);
        putchar('\n');
        f1-=2*f3;
    }
    return 0;
}