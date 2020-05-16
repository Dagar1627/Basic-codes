// return something takes nothing
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int add();  //fnctn dclr
int add()   // fntcn defn
{
	int a,b,c;
	cin>>a>>b;
	c=a+b;
	return c;
//	cout<<c;
//	return 0;
}
int main ()
{
//	add();
int ans=add();
cout<<ans;
return 0;
}

//for user input
// scanf("%d",&n); in c and cin>>n; in cpp

//for printing
//printf("%d",n); in c n cout<<n in cpp

//for line  change
// endl or \n (cpp)

