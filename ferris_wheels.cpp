#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	long long int n, x;
	cin>>n>>x;
	long long int a[n];
	for(long long int i=0 ; i<n ;i++)
	{
	    cin>>a[i];
	}
	sort(a,a+n);
	long long int l=0 ; 
	long long int h=n-1;
	long long int count=0;
	while(l<=h)
	{
	    if(a[h]+a[l]>x)
	    {
	        count++;
	        a[h]=-1;
	        h--;
	    }
	    else
	    {
	        count++;
	        l++;
	        h--;
	    }
	}
	cout << count << endl;
	return 0;
}
