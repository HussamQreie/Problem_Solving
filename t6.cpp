#include<iostream>
using namespace std;
int main() {
	int num;
	cout<<"Enter a number: ";
	cin>>num;
	int f=num;
	if(num>=1) {
		for(int i=num-1;i>=1;i--) {
			f=f*i;	
		}	
	cout<<"The factorical of this number = "<<f;
	}
	else if(num==0)
		cout<<"The factorical of this number = 1";
	else
		cout<<"Try Again!";


	return 0;
}
