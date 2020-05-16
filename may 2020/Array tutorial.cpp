#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main ()
{
	/// Declaration of array
	int a[5]={2,4,5,7,1};
	int b[]={1,3,7,5,3,7,9};
	int c[1000];
	for(int i=0;i<6;i++)
	cin>>c[i];
	int n;
	cin>>n;
	int d[n];
	for(int i=0;i<n;i++)
	cin>>d[i];
	
	for(int i=0;i<5;i++)
	cout<<a[i]<<" ";
	cout<<endl;
	
    int m= sizeof(b)/sizeof(b[0]);
    
    for(int i=0;i<m;i++)
    cout<<b[i]<<" ";
    
    cout<<endl;
    
    for(int i=1;i<=6;i++)
    cout<<c[i]<<" ";
    cout<<endl;
    
    
    for(int i=0;i<n;i++)
    cout<<d[i]<<" ";
    cout<<endl;
	
	
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


