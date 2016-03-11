#include<stdio.h>
int main()
{
    char s1[101],s2[101],i=0;
    scanf("%s",s1);
    scanf("%s",s2);
    while(s1[i]!='\0')
    {
        s1[i] = (s1[i] != s2[i])+'0';
        i++;
    }
    printf("%s\n",s1);
    return 0;
}