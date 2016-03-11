#include<stdio.h>
int main()
{
    int n,t,i;
    scanf("%d %d",&n,&t);
    char s[51];
    scanf("%s",s);
    while(t--)
    {
        for(i=0;i<n;i++)
        {
            if(s[i]=='B' && s[i+1]=='G')
            {
                s[i]='G';
                s[i+1]='B';
                i+=1;
            }
        }
    }
    printf("%s\n",s);
    return 0;
}