#include<iostream>
using namespace std;
void Even_or_Odd_Using_BitwiseAND_Operator() {
	// this solved by binary representation of numbers
	// if LSB is 0 (even) + 1 --> 0 bitwise_and(must both)(&) 1 == 0, 0&1->0, 1&1->1
	int num;
	while (true) {
		
		cout<<"Enter a number: ";
		cin>>num;
		if((num&1)==1) { // means odd
			
			cout<<"This number is odd!";	
		}
		else if((num&1)==0) { // means even
			
			cout<<"This number is even!";
		}
		
		cout<<endl;
		
	}

	
}
void Max_of_Two_Numbers_Using_Ternary_Operator() {
	
	int num1;
	int num2;
	while(1) {
		
		cout<<"Enter first number: ";
		cin>>num1;
		cout<<"Enter second number: ";
		cin>>num2;
		
		(num1>num2) ? cout<<num1<<" is greater than "<<num2<<endl : cout<<num2<<" is greater than "<<num1<<endl;
		
	}
	cout<<endl;
}

int main() {
	
 
		
		//	Even_or_Odd_Using_BitwiseAND_Operator();
		//	Max_of_Two_Numbers_Using_Ternary_Operator();
	
	
	
	
	
	return 0;
}
