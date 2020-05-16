//take yes return yes
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int add(int,int);
int add(int x,int y)
{
	return x+y;
}
int main ()
{
	int a,b,c;
	cout<<"enter two number which have to be added ";
	cin>>a>>b;
	c=add(a,b);
	cout<<"\nsum is ";
	cout<<c;
return 0;
}

//for user input
// scanf("%d",&n); in c and cin>>n; in cpp

//for printing
//printf("%d",n); in c n cout<<n in cpp

//for line  change
// endl or \n (cpp)

