#include<stdio.h>
int main()
{
    int c,a[26]={0},ans=0;
    getchar();
    while((c=getchar())!='}')
    {
        if(c==',' || c==' ');
        else
            a[c-'a']++;
    }
    for(c=0;c<26;c++)
        if(a[c])
            ans++;
    printf("%d\n",ans);
    return 0;
}