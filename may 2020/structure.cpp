#include<bits/stdc++.h>
#define ll long long int
using namespace std;
struct student{
	// by default public
	char name[100];
	int rollno;
	char address[1000];
	int phno;
	float attendence;
}s1;
int main ()
{
	student s2;
    cout<<" data of 1st student "<<endl;
    cin>>s1.name>>s1.rollno>>s1.attendence>>s1.address>>s1.phno;
    cout<<"details of 1st student "<<endl;
    cout<<"name is "<<s1.name<<endl;
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


