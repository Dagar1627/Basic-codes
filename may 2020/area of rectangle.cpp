#include<bits/stdc++.h>
#define ll long long int
using namespace std;
struct rectangle{
	double L;
	double B;
	int area()
	{
		return L*B;
	}
};
int main ()
{
	rectangle r;
	cout<< "Area of rectangle is" << endl;
	cin>>r.L>>r.B;
	cout<<r.area()<<endl;
return 0;
}

 
//for user input
// scanf("%d",&n); in c and cin>>n; in cpp

//for printing
//printf("%d",n); in c n cout<<n in cpp

//for line  change
// endl or \n (cpp)

/* int a[n];
  for(int i=0;i<n;i++)
  cin>>a[i];
*/


