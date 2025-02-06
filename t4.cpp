#include<iostream>
using namespace std;
int main() {
	
	// for+if+value
	int odd_number=1;
	for(int i=1;i<=100;i++) {
		
		if(odd_number%2!=0)
		{
			cout<<odd_number<<" ";
		}
			
		
		odd_number++;
		
			
	}
	cout<<endl;
	int even_number=0;
	for(int i=1;i<=101;i++) {
		
		if(even_number%2==0)
		{
			cout<<even_number<<" ";
		}
		
		
		even_number++;
		
		
	}
	
	
	
	return 0;
}
