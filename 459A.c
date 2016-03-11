#include<stdio.h>
#include<math.h>
int main()
{
    int x1,y1,x2,y2,x3,y3,x4,y4;
    scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
    if(x1==x2)
        printf("%d %d %d %d\n",x1+y2-y1,y1,x2+y2-y1,y2);
    else if(y1==y2)
        printf("%d %d %d %d\n",x1,y1+x2-x1,x2,y2+x2-x1);
    else if(fabs(x2-x1)==fabs(y2-y1))
        printf("%d %d %d %d\n",x1,y2,x2,y1);
    else
        printf("-1\n");
    return 0;
}