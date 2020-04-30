#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,f=1;    // to find n factorial
	cin>>n;
	/*while(n)
	{
		f=f*n;
		n--;
	}*/
	for(int i=n;i>0;i--)
	f=f*i;
	
    cout<<f;
	return 0;
}
