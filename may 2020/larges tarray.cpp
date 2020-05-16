#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main ()
{ int n;
cin>>n;
int x[n];
for(int i=0;i<n;i++)
cin>>x[i];
int max=x[0];
for(int i=0;i<n;i++)
if(max<x[i])
max=x[i];
cout<<"largest no is"<<max;
 
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


