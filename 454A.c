#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int f1,f2,f3=1,f4,i,j;
    f1=a/2;//space
    a/=2;
    for(i=0;i<=a;i+=f3)
    {
        if(i==-1)
            break;
        if(i==a)
            f3=-1;
        for(j=0;j<f1;j++)
            putchar('*');
        for(j=0;j<i;j++)
            putchar('D');
        putchar('D');
        for(j=i-1;j>=0;j--)
            putchar('D');
        for(j=0;j<f1;j++)
            putchar('*');
        putchar('\n');
        f1-=f3;
    }
    return 0;
}