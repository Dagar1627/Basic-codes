#include<bits/stdc++.h>
#define ll long long int
using namespace std;
struct naturalno{
	int n;
	void print()
	{
		for(int i=1;i<=n;i++)
		cout<<i<<" ";
	}
};
  int main ()
{
	naturalno z;
	cin>>z.n;
	z.print();
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


