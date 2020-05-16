#include<bits/stdc++.h>
#define ll long long int
using namespace std;
struct book{
	int bookid;
	char title[1000];
	double price;
	void input()
	{
		
		cin>>bookid>>title>>price;
	}
	void print()
	{ 
	    
		cout<<bookid<<title<<price;
	}
};

int main ()
{
	book b;
     b.input();
	 b.print();	
	
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


