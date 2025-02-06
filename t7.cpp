#include<iostream>
using namespace std;
int main() {
	int sum_odd=0;
	int sum_even=0;
	for(int i=2;i<=100;i+=2) {
		sum_odd=sum_odd+i;
		
	}
	cout<<"sum of even numbers from 0 to 100 = " <<sum_odd;
	cout<<endl;
	for(int i=1;i<100;i+=2) {
		sum_even=sum_even+i;
		
	}
	cout<<"sum of odd numbers from 0 to 100 = " <<sum_even;
	
	return 0;
}
