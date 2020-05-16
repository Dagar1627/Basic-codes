#include<bits/stdc++.h>
#define ll long long int
using namespace std;
book input();
void display(book);

struct book
{
	int bookid;
	char title[10];
	double price;
};
int main()
{
	book b1;
	b1=input();
	display(b1);
}
void display(book b)
{
 cout<<"\n"<<b.bookid<<" "<<b.title<<" "<<b.price;  
}
 book input()
 {
 	book b;
 	cout<<"Enter bookid, title and price of book";
 	cin>>b.bookid>>b.title>>b.price;
 	return(b);
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


