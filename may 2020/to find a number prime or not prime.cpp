#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main ()
{
	int x,i;
	scanf("%d",&x);
	for(i=2; i<=x-1; i++)
	if(x%i==0)
	break;
	if (i==x)
	printf("%d is a prime number",x);
	else
	printf("%d is not a prime number",x);
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


