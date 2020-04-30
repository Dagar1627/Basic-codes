#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int reverse , num , reminder ;
	cout << " enter a number for reverse" << endl;
	cin >> num ;
	while ( num>0)
	{
		reminder = num%10;
		 reverse = reverse*10+ reminder;
		 num = num/10;
	}
	cout<< reverse <<" reversed value" ;
	return 0;
}
