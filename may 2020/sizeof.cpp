#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main ()
{
//	cout<<sizeof(int);
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
  cin>>a[i];
  
  int sum=0;
  for(int i=0;i<n;i++)
  sum= sum+ a[i];
  
  cout<<sum;
return 0;
}

//for user input
// scanf("%d",&n); in c and cin>>n; in cpp

//for printing
//printf("%d",n); in c n cout<<n in cpp

//for line  change
// endl or \n (cpp)

