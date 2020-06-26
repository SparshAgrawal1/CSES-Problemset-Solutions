#include <iostream>
#include <bits/stdc++.h>
#include <map>
#define ll long long int
using namespace std;

bool sortbysec(const pair<ll,ll> &a, 
              const pair<ll,ll> &b) 
{ 
    return (a.second < b.second); 
}

int main()
{


    ll n;
    cin>>n;
    ll a[n],b[n];
    for(ll i=0 ; i<n ; i++)
    {
        cin>>a[i];
    }
    b[0]=a[0];
    ll ans=b[0];
    for(ll i=1 ; i<n ; i++)
    {
        b[i]=max(a[i],a[i]+b[i-1]);
        ans=max(ans,b[i]);
    }
    cout << ans << endl;
    
    
        
    
    
    return 0;
}