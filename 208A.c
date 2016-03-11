#include<stdio.h>
#include<string.h>
int main()
{
    char s[201],oup[300];
    scanf("%s",s);
    int len = strlen(s),i=0,j=0,flag=0;
    for(i=0;i<len;i++)
    {
        if(i<len-2)
        {
            if(s[i]=='W' && s[i+1]=='U' && s[i+2] == 'B')
            {
                i+=2;
                if(flag)
                {
                    oup[j++]=' ';
                    flag=0;
                }
            }
            else
            {
                flag=1;
                oup[j++]=s[i];
            }
        }
        else
        {
            oup[j++]=s[i];
        }
    }
    oup[j] = '\0';
    printf("%s\n",oup);
    return 0;
}