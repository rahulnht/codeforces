#include <bits/stdc++.h>
using namespace std;
int hcf(int a,int b)
{
    if(b==0)
        return a;
    else
        return hcf(b,a%b);
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    int ans;
    for (int i=1;i<=n;i++)
    {
        cin >> a[i];
        if(i==1)
            ans = a[i];
        ans = hcf(a[i],ans);
    }
   // cout << ans;
    int i;
    for (i=1;i<=n;i++)
    {
        a[i] /= ans;
        while(a[i]%2 == 0)
            a[i] /= 2;
        while(a[i]%3 == 0)
            a[i] /= 3;
        if(a[i]!=1)
            break;
    }
    if(i==n+1)
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}