#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main ()
{
	int x,r;
	for(r=1;r<=5 ;r++)
	{
	
	for(x=1;x<=5;x++)
	if(x<=r)
	printf("*");
	else
	printf(" ");
	printf("\n");
}

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


