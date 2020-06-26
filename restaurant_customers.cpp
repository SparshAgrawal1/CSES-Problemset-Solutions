#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;



int main()
{


    ll n;
    cin>>n;
    ll count=0;
    vector<pair<ll,bool>> v;
    for(ll i=0 ; i<n ; i++)
    {
        ll a,b;
        cin>>a>>b;
        v.push_back({a,true});
        v.push_back({b,false});
    }
    ll ans=INT_MIN;
    sort(v.begin(),v.end());
    ll curr=0;
    for(ll i=0 ; i<v.size() ; i++)
    {
        if(v[i].second==true)
        {
            curr++;
        }
        else
        {
            curr--;
        }
        ans=max(ans,curr);
    }
    cout << ans << endl;
        
    
    
    return 0;
}