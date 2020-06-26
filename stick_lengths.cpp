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
    map<ll,ll> m;
    for(ll i=0 ; i<n ; i++)
    {
        cin>>a[i];
        m[a[i]]++;
    }
    sort(a,a+n);
    ll p=a[n/2];
    ll count=0;
    for(auto x:m)
    {
        count=count+abs(x.first-p)*x.second;
    }
    
    cout << count << endl;
    
        
    
    
    return 0;
}