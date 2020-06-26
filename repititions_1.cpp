#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	string a;
	cin>>a;
	int count=1;
	vector<int> v;
	int n=a.length();
	for(int i=0 ; i<n-1 ; i++)
	{
	    if(a[i]==a[i+1])
	    {
	        count++;
	    }
	    else
	    {
	        v.push_back(count);
	        count=1;
	    }
	}
// 	for(auto x:v)
// 	{
// 	    cout << x << " ";
// 	}
	v.push_back(count);
	cout << *max_element(v.begin(),v.end()) << endl;
	
	return 0;
}
