#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=1,max=0,v,i;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    cin>>arr[i];
    v=arr[0];
  
    sort(arr,arr+n);
    for(i=1;i<n;i++){
    if(v==arr[i]){
    count++;
    }
    else{
    if(count>max){
    max=count;
    }
    v=arr[i];
    count=1;
    }
    }
    if(count>max){
    max=count;
    }
    cout <<max<<endl;
    return 0;
}