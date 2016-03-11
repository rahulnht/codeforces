#include<stdio.h>
int cmpfunc(const void *a,const void *b)
{
    return (*(int *)b - *(int *)a);
}
int main()
{
    int t,k=0,i;
    int a[1000]={0};
    char s[16];
    scanf("%d\n%s",&t,s);
    for(i=0;i<t;i++)
    {
        if(s[i]=='2')
            a[k++]=2;
        else if(s[i]=='3')
            a[k++]=3;
        else if(s[i]=='4')
        {
            a[k++]=3;
            a[k++]=2;
            a[k++]=2;
        }
        else if(s[i]=='5')
            a[k++]=5;
        else if(s[i]=='6')
        {
            a[k++]=5;
            a[k++]=3;
        }
        else if(s[i]=='7')
            a[k++]=7;
        else if(s[i]=='8')
        {
            a[k++]=7;
            a[k++]=2;
            a[k++]=2;
            a[k++]=2;
        }
        else if(s[i]=='9')
        {
            a[k++]=7;
            a[k++]=3;
            a[k++]=3;
            a[k++]=2;
        }
    }
    qsort(a,1000,4,cmpfunc);
    k=0;
    while(a[k]!=0)
        printf("%d",a[k++]);
    putchar('\n');
    return 0;
}