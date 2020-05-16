#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main ()
{
	int x,r,s=0;
	scanf("%d",&x);
	while(x!=0){
		r=x%10;
		s=s+r;
		x=x/10;
	}
	printf("sum of digits =%d",s);
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


