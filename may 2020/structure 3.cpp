#include<bits/stdc++.h>
#define ll long long int
using namespace std;
struct book{
	int bookid;
	char title[10];
	double price;
};
int main ()
{
	book b1={100,"c++",450.00};
	book b2;
	b2.bookid=101;
	strcpy(b2.title,"c language");
	b2.price=300.00;
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


