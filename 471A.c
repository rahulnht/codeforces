#include<stdio.h>
int main()
{
    short int a[6],i,b[11]={0},flag=10;
    for(i=0;i<6;i++)
    {
        scanf("%hd",&a[i]);
        b[a[i]]++;
    }
    for(i=0;i<10;i++)
        if(b[i]>3)
            flag=i;
    if(b[flag]==6)
        printf("Elephant\n");
    else if(b[flag]==5)
        printf("Bear\n");
    else if(flag==10)
        printf("Alien\n");
    else
    {
        for(i=0;i<10;i++)
            if(b[i]==2)
            {
                printf("Elephant\n");
                flag=100;
            }
        if(i==10 && flag!=100)
            printf("Bear\n");
    }
    return 0;
}