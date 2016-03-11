#include<stdio.h>
int main()
{
    char s=getchar();
    char a[10] = {'q','w','e','r','t','y','u','i','o','p'};
    char b[10] = {'a','s','d','f','g','h','j','k','l',';'};
    char c[10] = {'z','x','c','v','b','n','m',',','.','/'};
    short int x,i,flag;
    if(s=='R')
        x=-1;
    else
        x=1;
    getchar();
    while((s=getchar())!='\n')
    {
        flag = 0;
        for(i=0;i<10 && flag == 0;i++)
            if(a[i]==s)
            {
                flag=1;
                if(i+x>=0 && i+x<10)
                    putchar(a[i+x]);
                else
                    putchar(a[i]);
            }
        for(i=0;i<10 && flag == 0 ;i++)
            if(b[i]==s)
            {
                flag=1;
                if(i+x>=0 && i+x<10)
                    putchar(b[i+x]);
                else
                    putchar(b[i]);
            }
        for(i=0;i<10 && flag == 0;i++)
            if(c[i]==s)
            {
                flag=1;
                if(i+x>=0 && i+x<10)
                    putchar(c[i+x]);
                else
                    putchar(c[i]);
            }
    }
    putchar('\n');
    return 0;
}