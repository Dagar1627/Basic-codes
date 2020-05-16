#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void add1();

int add2()
{
	int a,b;
	cin>>a>>b;
	return a+b;
}
void add3(int x,int y)
{
	cout<<x+y<<endl;
}

int add4(int a,int b)
{
	return a+b;
}
int main ()
{
int a,b,c;
cin>>a>>b;


add1();       // return nothing takes nothing
c=add2();      // return yes(int) takes nothing
add3(a,b);      //return nothing takes yes(two int variables
c=add4(a,b);    // return yes(int) takes yes
 
 cout<<c;  
return 0;
}
void add1()
{
	int a,b,c;
	cin>>a>>b;
	c=a+b;
	cout<<c<<endl;
}
//for user input
// scanf("%d",&n); in c and cin>>n; in cpp

//for printing
//printf("%d",n); in c n cout<<n in cpp

//for line  change
// endl or \n (cpp)

