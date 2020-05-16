#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int n=10;
struct reversed{	

	int a[10];
	void input()
	{
	
		for(int i=0;i<n;i++)
		cin>>a[i];
	}
	void print()
	{
		for(int i=n-1;i>=0;i--)
		cout<<a[i]<<" ";
	}
};
int main ()
{
	reversed r;
	r.input();
	r.print();
return 0;
}

//for user input
// scanf("%d",&n); in c and cin>>n; in cpp

//for printing
//printf("%d",n); in c n cout<<n in cpp

//for line  change
// endl or \n (cpp)

/*
 int a[n];
  for(int i=0;i<n;i++)
  cin>>a[i];
*/


