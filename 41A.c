#include<stdio.h>
#include<string.h>
int main()
{
    char a[101],b[101];
    scanf("%s",a);
    scanf("%s",b);
    int la=strlen(a);
    int lb=strlen(b);
    lb--;
    int i;
    for(i=0;i<la;i++)
    {
        if(a[i]!=b[lb-i])
            break;
    }
    if(i==la)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}