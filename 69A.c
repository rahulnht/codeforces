#include<stdio.h>
int main()
{
    int x=0,y=0,z=0,a,b,c;
    int n;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d %d %d",&a,&b,&c);
        x+=a;
        y+=b;
        z+=c;
    }
    if(x||y||z)
        printf("NO\n");
    else
        printf("YES\n");
    return 0;
}