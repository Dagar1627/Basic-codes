#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main ()
{
	int x;
    x=getIntegerOnly();
	printf ("you have entered %d",x);
return 0;
}
int getintegerOnly()
{
	int num=0,ch;
	do
}
 ch=getch();
if(ch>=48&&ch<=57)
{
	printf("%",ch);
	num=num*10+(ch-48);
}
 if(ch==13)
  break; 
  whie(1);
  return(num);
}
//for user input
// scanf("%d",&n); in c and cin>>n; in cpp

//for printing
//printf("%d",n); in c n cout<<n in cpp

//for line  change
// endl or \n (cpp)

