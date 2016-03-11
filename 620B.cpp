#include<bits/stdc++.h>
using namespace std;
int compute(int num)
{
    int ans=0;
    while(num!=0)
    {
        int temp = (num%10);
        if(temp == 0 || temp == 6 || temp == 9)
            ans+=6;
        else if(temp == 1)
            ans+=2;
        else if(temp == 2 || temp ==3 || temp == 5)
            ans+=5;
        else if(temp == 4)
            ans+=4;
        else if(temp == 7)
            ans+=3;
        else
            ans+=7;
        num = num/10;
    }
    return ans;
}
int main()
{
    int low,high,ans=0;
    cin >> low >> high;
    for(int i=low ; i<=high;i++)
    {
        ans+=compute(i);
    }
    cout << ans << endl;
    return 0;
}