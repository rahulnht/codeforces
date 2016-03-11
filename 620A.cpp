#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x1,x2,y1,y2;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    int a = abs(x2-x1);
    int b = abs(y2-y1);
    int ans = a>b?a:b;
    cout << ans << endl;
    return 0;
}