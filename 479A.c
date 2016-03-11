#include<stdio.h>
#define max(x,y) x>y?x:y
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int temp = max(((a+b)+c),((a*b)+c));
    temp = max(temp,((a+b)*c));
    temp = max(temp,((a*b)*c));
    temp = max(temp,(a+(b*c)));
    temp = max(temp,(a*(b+c)));
    printf("%d\n",temp);
    return 0;
}