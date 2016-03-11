#include<stdio.h>
int main()
{
    short int t,a,i,x[22]={60,90,108,120,135,140,144,150,156,160,162,165,168,170,171,172,174,175,176,177,178,179};
    scanf("%hd",&t);
    while(t--)
    {
        scanf("%hd",&a);
        for(i=0;i<22;i++)
            if(x[i]==a)
            {
                printf("YES\n");
                break;
            }
        if(i==22)
            printf("NO\n");
    }
    return 0;
}