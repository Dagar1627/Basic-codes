#include <bits/stdc++.h>
using namespace std;
int main()
{
	int boy=5;
	//cin >>boy;
	cout<<"value of boy is "<<boy<<endl;
	boy++;          //post increment
	cout<<"value of boy by post increment is "<<boy<<endl;
	++boy;
	cout <<boy<<endl;      //pre increment
	boy--;
	cout<<boy<<endl;        //post decrement
	--boy;
	cout<<boy<<endl;         //pre decrement
	int girl;
	girl=boy++;
	cout<<girl<<" "<<boy<<endl;
	return 0;
	}
	
