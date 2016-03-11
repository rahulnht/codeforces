#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int temp,ans=0,left=1;
    vector<pair<int , int> > vec;
    map <int, int> pehla;
    for(int i=0; i<n ;i++)
    {
        scanf("%d", &temp);
        if(pehla.find(temp) != pehla.end())
        {
            vec.push_back(make_pair(pehla[temp],i+1));
            ans++;
            pehla.clear();
            left = i+2;
        }
        else
        {
            pehla[temp]=left;
            continue;
        }
    }
    if(ans != 0)
    {
        printf("%d\n",ans);
        vector<pair<int, int> >::iterator v = vec.begin();
        while(v!=vec.end()-1)
        {
            printf("%d %d\n", v->first,v->second); 
            v++;
        }
        printf("%d %d\n", v->first, n);
    }
    else
        printf("-1\n");
    return 0;
}