#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void permute(string str) 
{ 
    vector<string> v;
    int count=0;
    sort(str.begin(), str.end()); 
    do { 
       count++;
       v.push_back(str);
    } while (next_permutation(str.begin(), str.end())); 
    cout << count << endl;
    for(auto x:v)
    {
        cout << x << endl;
    }
}
int main() {
	// your code goes here
	string s;
	cin>>s;
	permute(s);
	
	return 0;
}
