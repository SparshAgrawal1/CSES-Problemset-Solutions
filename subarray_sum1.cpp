#include <iostream>
#include <bits/stdc++.h>
#include <map>
#define ll long long int
using namespace std;
ll findSubarraySum(ll arr[], ll n, ll sum) 
{ 
    unordered_map<ll, ll> prevSum; 
  
    ll res = 0; 

    ll currsum = 0; 
  
    for (ll i = 0; i < n; i++) 
    { 
        currsum += arr[i]; 
        if (currsum == sum)  
            res++;         
        if (prevSum.find(currsum - sum) !=  
                                  prevSum.end())  
            res += (prevSum[currsum - sum]); 
        prevSum[currsum]++; 
    } 
  
    return res; 
} 

int main()
{
    ll n,x;
    cin>>n>>x;
    ll v[n];
    for(ll i=0 ; i<n ; i++)
    {
        cin>>v[i];
        
    }
    cout << findSubarraySum(v,n,x) << endl;
    
    return 0;
}