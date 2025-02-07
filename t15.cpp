#include<iostream>
using namespace std;
void Swap_Two_Numbers_by_reference(int &a, int &b) {// use and change!
	
		int swap_n; // third variable
		
		cout<<"Before Swap: "<<endl<<endl;
		cout<<"Number1 = "<<a<<endl;
		cout<<"Number2 = "<<b<<endl<<endl;
	
		swap_n=a;//5
		a=b;//10
		b=swap_n;//5
		
		
		cout<<"After Swap: "<<endl<<endl;
		cout<<"Number1 = "<<a<<endl;
		cout<<"Number2 = "<<b<<endl<<endl;
	
}
void Swap_Two_Numbers_by_value(int x, int y) {// use only!

	int swap_n; // third variable
	
	cout<<"Before Swap: "<<endl<<endl;
	cout<<"Number1 = "<<x<<endl;
	cout<<"Number2 = "<<y<<endl<<endl;
	
	swap_n=x;//5
	x=y;//10
	y=swap_n;//5
	
	
	cout<<"After Swap: "<<endl<<endl;
	cout<<"Number1 = "<<x<<endl;
	cout<<"Number2 = "<<y<<endl<<endl;
}
int Max_value(int g, int h ) {
	
	return (g>h)? g:h;
}
double Max_value(double i, double j) {
	
	return (i>j)? i:j;
}
char Max_value(char n, char m) {
	
	return (n>m)? n:m;
}
inline void Multipy_2_values_inline_func(int r, int t) {//small and used more than once
	cout<<"r * t = "<<r*t<<endl;
}
int factorial(int l) {
	// is essentially like loop but recursively :)
	if(l==0||l==1) 
		return 1; //this is the base(start) case 
	
	return l* factorial(l-1); // first l is the end case 
	
	//look at this below 
	/*
	factorial(5) 
	├─ factorial(4)
	│   ├─ factorial(3)
	│   │   ├─ factorial(2)
	│   │   │   ├─ factorial(1)  → Returns 1
	│   │   │   ↓
	│   │   ├── Returns 2
	│   │   ↓
	│   ├── Returns 6
	│   ↓
	├── Returns 24
	↓
	Returns 120

	*/
} 
int main() {
	
		// call by reference (change original values!)
	
		int a=5;
		int b=10;
		
		Swap_Two_Numbers_by_reference(a,b);
		cout<<"The original values here should be changed! (effect of call by reference)!: "<<endl<<endl;
	
		cout<<"Number1 = "<<a<<endl;
		cout<<"Number2 = "<<b<<endl<<endl;
		
		// call by value (don't affect original values!)
		int x=3;
		int y=6;
		Swap_Two_Numbers_by_value(x,y);
		cout<<"The original values here should not be changed! (no effect of call by value)!: "<<endl<<endl;
	
		cout<<"Number1 = "<<x<<endl;
		cout<<"Number2 = "<<y<<endl<<endl;

		// overloaded function
		int g=2;
		int h=4;
		cout<<"The maximum value between "<<g<<" and "<<h<<" is: ";
		cout<<Max_value(g,h);	// same name
		cout<<endl;
	
		double i=3.5;
		double j=8.2;
		cout<<"The maximum value between "<<i<<" and "<<j<<" is: ";
		cout<<Max_value(i,j);	// same name
		cout<<endl;
		
		char n='A';
		char m='C';
		cout<<"The maximum value between "<<n<<" and "<<m<<" is: ";
		cout<<Max_value(n,m);	// same name
		cout<<endl<<endl;
	
		Multipy_2_values_inline_func(10,3);
		Multipy_2_values_inline_func(3,2);
		Multipy_2_values_inline_func(5,8);
	
		int l;
		cout<<"Enter a number: ";
		cin>>l;
		cout<<"Factorial of "<<l<<" = "<<factorial(l);
	return 0;
}
