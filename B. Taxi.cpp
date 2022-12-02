#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
ll n,i,child,res=0,tmp=0;cin>>n;
for(i=0;i<n;i++){
    cin>>child;
    tmp+=child;
    }
    cout<<(tmp/4)+(tmp%4?1:0);


return 0;
}
