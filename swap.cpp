#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b;
/*	c=b;
	b=a;            logic 1
	a=c; */
	b= a+b-(a=b);
	cout<<" a is "<<a<< " b is "<<b;
	return 0;
	
}
