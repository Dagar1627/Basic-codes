#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main ()
{
	int a,b,H;
	scanf("%d%d",&a,&b);
 for(H=a<b?a:b; H>=1;H--)
   if(a%H==0&&b%H==0)
   break;
   
   printf("HCF is %d",H);
return 0;
}

//for user input
// scanf("%d",&n); in c and cin>>n; in cpp

//for printing
//printf("%d",n); in c n cout<<n in cpp

//for line  change;l
// endl or \n (cpp)

