#include<stdio.h>
#include<string.h>
int main()
{
    int counta[26],countb[26],c,len;
    char s[101];
    
    for(c=0;c<26;c++)
        counta[c]=countb[c]=0;
    
    scanf("%s",s);
    len = strlen(s);
    for(c=0;c<len;c++)
        counta[(s[c]-'A')]++;
    
    
    scanf("%s",s);
    len = strlen(s);
    for(c=0;c<len;c++)
        counta[(s[c]-'A')]++;
    
    
    
    scanf("%s",s);
    len = strlen(s);
    for(c=0;c<len;c++)
        countb[(s[c]-'A')]++;
    
    
    for(c=0;c<26;c++)
        if(counta[c]!=countb[c])
            break;
    if(c==26)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}