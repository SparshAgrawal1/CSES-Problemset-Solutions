#include <iostream>
#include <bits/stdc++.h>
using namespace std;
long long int findTrailingZeros(long long int n) 
{ 
    
    long long int count = 0; 
  
    for (long long int i = 5; n / i >= 1; i *= 5) 
        count += n / i; 
  
    return count; 
} 


int main() {
	long long int n;
	cin>>n;
	cout << findTrailingZeros(n) << endl;
	return 0;
// 
// 	cout << count1 << endl;
}
