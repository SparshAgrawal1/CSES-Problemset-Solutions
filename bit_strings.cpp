#include <iostream>
#include <bits/stdc++.h>
using namespace std;



int main() {
	long long int n;
    cin>>n;
    long long int mod = 1000000007;
    long long int j=1;
    for(long long int i=0 ; i<n ; i++)
    {
        j=j*2;
        j=j%mod;
    }
    cout << j << endl;
    return 0;
}
