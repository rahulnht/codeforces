#include<stdio.h>
#include<string.h>
int main()
{
    char s[105],a[5]={'h','e','l','l','o'};
    scanf("%s",s);
    int len = strlen(s),i=0,j=0,count=0;
    while(count!=5 && i<len)
    {
        if(s[i]==a[j])
        {
            i++;
            j++;
            count++;
        }
        else
            i++;
    }
    if(count==5)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}