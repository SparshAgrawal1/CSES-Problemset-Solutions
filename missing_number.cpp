#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long int n;
	cin>>n;
// 	long long int j;
// 	long long int k;
	long long int a[n];
	set<long long int> m;
	for(long long int i=0 ; i<n ; i++)
	{
	    cin>>a[i];
	    m.insert(a[i]);
	   // j=j^a[i];
	}
    for(long long int i=1 ; i<=n ; i++)
    {
        if(m.find(i)==m.end())
        {
            cout << i << endl;
            break;
        }
    }
	
	return 0;
}
