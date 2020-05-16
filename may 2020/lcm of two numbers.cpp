#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main ()
{
	int x,y,Z;
	scanf("%d%d",&x,&y);
	for(Z=1;Z<=x*y;Z++)
	if(Z%x==0&&Z%y==0)
	break;
	printf("LCM is %d",Z);
return 0;
}

//for user input
// scanf("%d",&n); in c and cin>>n; in cpp

//for printing
//printf("%d",n); in c n cout<<n in cpp

//for line  change
// endl or \n (cpp)

