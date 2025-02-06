#include<iostream>
using namespace std;
int main() {
	//prime num : >1 and bypass 2&3&5 and doesn't accept on 2,3 or 5.
	int num;
	while(true)
	{
		cout<<"Enter a number more than 1: ";
		cin>>num;
		if(num<=1)
			cout<<"Try Again!";
		else
		{
			
			if(num==2 || num==3 ||num==5) 
				cout<<"This is a prime number!";
			else {
				
					if(num%2==0 ||num%3==0||num%5==0)
						cout<<"This is not a prime number!";
					else
						cout<<"This is a prime number!";
			}
				
			
		
		
		}
		
		cout<<endl;
	}
	
	
	
	return 0;
}
