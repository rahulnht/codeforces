#include<bits/stdc++.h>
using namespace std;
int prime(int n)
{
    if(n==1)
        return 0;
    if(n==2)
        return 1;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    int n,i;
    cin >> n;
    vector<int> ans;
    if(n>1)
    {
        for(i=2;i<=n;i++)
        {
            if(prime(i))
            {
                int a=i;
                while(a<=n)
                {
                    ans.push_back(a);
                    a = a*i;
                }
            }
        }
    }
    int length = ans.size();
    cout << length << endl;
    for(i=0;i<length;i++)
    {
        cout << ans[i] << " ";
        if(i==length-1)
            cout << endl;
    }
    return 0;
}