#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int i,n,s[27];
    char *a;
    scanf("%d",&n);
    a = (char *)malloc(sizeof(char)*(n+5));
    scanf("%s",a);
    for(i=0;i<27;i++)
        s[i]=0;
    for(i=0;i<n;i++)
    {
        if(a[i] >= 65 && a[i] <= 90 )
            s[a[i]-'A']++;
        else if(a[i] >= 97 && a[i] <= 122)
            s[a[i]-'a']++;
        else
            s[26]++;
    }
    for(i=0;i<26;i++)
        if(!s[i])
            break;
    if(i==26)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}