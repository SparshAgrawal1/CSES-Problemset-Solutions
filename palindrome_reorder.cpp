#include <iostream>
#include <bits/stdc++.h>
using namespace std;



int main() 
{
	string s;
	cin>>s;
	map<char,int> m;
	long long int n=s.length();
	for(long long int i=0 ; i<n ; i++)
	{
	    m[s[i]]++;
	}
	vector<pair<long long int,char>> v;
	for(auto x:m)
	{
	   // cout << x.first << " "<< x.second << endl;
	    v.push_back({x.second,x.first});
	}
	sort(v.begin(),v.end());
	long long int count=0;
	for(long long int i=0 ; i<v.size() ; i++)
	{
	    if(v[i].first%2!=0)
	    {
	        count++;
	    }
	}
	if(count>1)
	{
	    cout << "NO SOLUTION" << endl;
	}
	else
	{
	    string x1="";
	    string x2="";
	    string x3="";
	    for(long long int i=0 ; i<v.size() ; i++)
	    {
	        if(v[i].first%2!=0)
	        {
	            long long int q = v[i].first;
	            while(q--)
	            {
	                x2=x2+v[i].second;
	            }
	        }
	        else
	        {
	            long long int q=v[i].first;
	            q=q/2;
	            while(q--)
	            {
	                x1=x1+v[i].second;
	            }
	        }
	    }
	    x3=x1;
	    reverse(x3.begin(),x3.end());
	    string x4=x1+x2+x3;
	    cout << x4 << endl;
	}
    return 0;
}
