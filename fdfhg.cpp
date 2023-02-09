#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=4010;
ll a[N];
map<ll,int> mp;
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
        mp[a[i]]++;
    }
    vector<ll> ans;
    for(int i=0;i<n;i++)
    {
        if(mp[a[i]]==1)
        {
            ans.push_back(a[i]);
            mp[a[i]]=-1;
            for(int j=2;j*a[i]<=1e9;j++)
                mp[j*a[i]]--;
        }
    }
    sort(ans.begin(),ans.end());
    for(int i=0;i<4;i++)
        printf("%lld ",ans[i]);
    return 0;
}