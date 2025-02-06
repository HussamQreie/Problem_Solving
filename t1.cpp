#include <iostream>
using namespace std;
int main () {
	
	int k=1;
	while(k<=10) {
		
		
		int i=0;
		int j=0;
		cout<<"Enter first number: ";
		cin>>i;
		cout<<"Enter second number: ";
		cin>>j;
		
		if(i%j==0)
			cout<<i<<" accept "<<j<<endl;
		else if(i%j!=0)
			cout<<i<<" reject "<<j<<endl;
		
		k++;
	}
			
	return 0;
}

