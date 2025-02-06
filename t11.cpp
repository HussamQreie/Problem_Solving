#include<iostream>
using namespace std;
int main() {
	//Simple Interest
	// Interest= Principal*Rate*Time
	float p,r,t;
	cout<<"Enter Principal value in $: ";
	cin>>p;
	cout<<"Enter Interest Rate value in %: ";
	cin>>r;
	r=r/100;
	cout<<"Enter period time value in years: ";
	cin>>t;
	
	float i=p*r*t;
	cout<<"Interest value = "<<i<<endl;
	p=p+i;
	cout<<"Principal after Interest value in $:"<<p;
	
	
	
	
	return 0;
}
