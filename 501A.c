#include<stdio.h>
#define max(x,y) x>y?x:y
int main()
{
    int  a,b,c,d,vmax,mmax;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    //For Misha
    mmax = a - (a*c/250);
    mmax = max(mmax,a*3/10);
    //For Vasya
    vmax = b - (b*d/250);
    vmax = max(vmax,b*3/10);
    if(vmax>mmax)
        printf("Vasya\n");
    else if(mmax>vmax)
        printf("Misha\n");
    else
        printf("Tie\n");
    return 0;
}