#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long int n;
	cin>>n;
	if(n==1)
	{
	    cout << n<< endl;
	}
	else
	{
	    cout << n << " ";
	    while(n!=1)
	    {
	        if(n%2==0)
	        {
	            n=n/2;
	            cout << n << " ";
	            
	        }
	        else
	        {
	            n=n*3;
	            n++;
	            cout << n << " ";
	        }
	    }
	    cout << endl;
	}
	return 0;
}
