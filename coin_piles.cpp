#include <iostream>
#include <bits/stdc++.h>
using namespace std;



int main() {
	long long int t;
	cin>>t;
	while(t--)
	{
	    long long int a,b;
	    cin>>a>>b;
	    long long int x=abs(a-b);
	    long long int y=min(a,b);
	    if(x>y)
	    {
	        cout << "NO" << endl;
	    }
	    else
	    {
	        y=y-x;
	        if(y%3==0)
	        {
	            cout << "YES" << endl;
	        }
	        else
	        {
	             cout << "NO" << endl;
	        }
	    }
	}
// 	cout << count1 << endl;
return 0;
}
