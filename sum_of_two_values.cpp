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


    ll n,x;
    cin>>n>>x;
    ll count=0;
    vector<ll> v;
    map<ll,vector<ll>> m;
    for(ll i=0 ; i<n ; i++)
    {
        ll a;cin>>a;
        v.push_back(a);
        m[a].push_back(i+1);
    }
    bool flag=true;
    for(ll i=0 ; i<n ; i++)
    {
        if(m.find(x-v[i])!=m.end())
        {
            
            std::map<ll,vector<ll>>::iterator it;
            it=m.find(x-v[i]);
            if(m[it->first][0]!=i+1)
            {
                cout << i+1 << " ";
                cout << m[it->first][0] << endl;
                flag=false;
                break;
            }
        }
    }
    if(flag==true)
    {
        cout << "IMPOSSIBLE" << endl;
    }
    
    
        
    
    
    return 0;
}