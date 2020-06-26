#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void xxxx(vector<int> a[],bool b[],int i)
{
    b[i]=true;
    // queue<int> q;
    // q.push()
    for(auto x:a[i])
    {
        if(b[x]==false)
        {
            xxxx(a,b,x);
        }
    }
}

int main() {
	// your code goes here
	int n,m;
	cin>>n>>m;
	vector<int> a[n+1];
	bool b[n+1]={false};
	while(m--)
	{
	    int x,y;
	    cin>>x>>y;
	    a[x].push_back(y);
	    a[y].push_back(x);
	}
	vector<int> v;
	for(int i=1 ; i<=n ; i++)
	{
	    if(b[i]==false)
	    {
	        v.push_back(i);
	        xxxx(a,b,i);
	    }
	}
	cout << v.size()-1 << endl;
	for(int i=0 ; i<v.size()-1 ; i++)
	{
	    cout << v[i] << " "<<v[i+1]<< endl;
	}
	return 0;
}
