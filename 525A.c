#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char s[200000];
    int n,i,l,count=0;
    scanf("%d",&n);
    scanf("%s",s);
    l = strlen(s);
    int a[26];
    for(i=0;i<26;i++)
        a[i] =  0;
    for(i=0;i<l;i++)
    {
        if(i%2==0)
            a[s[i]-'a']++;
        else
        {
            if(a[s[i]-'A']==0)
                count++;
            else
                a[s[i]-'A']--;
        }
    }
    printf("%d\n",count);
    return 0;
}