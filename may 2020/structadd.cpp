#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void input();
void print();
struct add{
	int a,b;
};
int main ()
{
	add s;
	input();
	print();
return 0;
}
void input()
{
	add s;
	cin>>s.a>>s.b;

}
void print()
{
	cout<<s.a+s.b;
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


