#include <bits/stdc++.h>
using namespace std;
int a[1005];
int n;
int rank()
{
    int ans=0;
    int i;
    for(i=1;i<n;i++)
    {
        if(a[0]>a[i])
            break;
    }
    return i;
}
void sort()
{
    for(int i=1;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(a[i]<=a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
int main()
{
    cin >> n;
    for(int i=0;i<n;i++)
        cin >> a[i];
    
    sort();
    int count=0;
    while(rank()!=1)
    {
        count++;
        a[1]--;
        a[0]++;
        sort();
    }
    cout << count << '\n';
    return 0;
}