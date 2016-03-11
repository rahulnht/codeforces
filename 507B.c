#include<stdio.h>
#include<math.h>
int main()
{
    double r,x,y,x1,y1;
    scanf("%lf %lf %lf %lf %lf",&r,&x,&y,&x1,&y1);
    r *= 2;
    x = sqrt((x1-x)*(x1-x) + (y1-y)*(y1-y));
    x = x/r;
    printf("%d\n",(int)ceil(x));
    return 0;
}