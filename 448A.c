#include<stdio.h>
int main()
{
    int a1,a2,a3,b1,b2,b3,n;
    scanf("%d %d %d",&a1,&a2,&a3);
    scanf("%d %d %d",&b1,&b2,&b3);
    scanf("%d",&n);
    a1 = a1+a2+a3;
    b1 = b1+b2+b3;
    while(n--)
    {
        if(a1>0)
            a1-=5;
        else if(b1>0)
            b1-=10;
    }
    if(a1>0||b1>0)
        printf("NO\n");
    else
        printf("YES\n");
    return 0;
}