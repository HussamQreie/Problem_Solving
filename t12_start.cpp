#include<iostream>
using namespace std;
void Temp_Conv() {
	
	// Tempreture Converter
	float fah;
	float cel;
	cout<<"Enter The Temp in Celsius: ";
	cin>>cel;
	fah= (cel*9/5)+32;
	cout<<"The Temp in Fahrenheit = "<<fah<<endl;
	
	cout<<"Enter The Temp in Fahrenheit: ";
	cin>>fah;
	cel= (fah-32)*5/9;
	cout<<"The Temp in Celsius = "<<cel;

}
void Interest_Calc() {
	
	float i,p,r,t;
	cout<<"Enter the principal in $: ";
	cin>>p;
	cout<<"Enter the annual interest rate in %: ";
	cin>>r;
	cout<<"Enter the time in years: ";
	cin>>t;
	i=(p*r*t)/100;
	cout<<"The simple interest = "<<i;
	cout<<endl;
}
void Swap_Without_Third_Number() {
	
	int num1=5;
	int num2=10;
	cout<<"Number 1 = "<<num1<<endl;
	cout<<"Number 2 = "<<num2<<endl;
	num1=num2;//num1=10
	num2=num1-5;// num2=5
	cout<<"Number 1 after swap = "<<num1<<endl;
	cout<<"Number 2 after swap = "<<num2<<endl;
	
	
}
void Find_ASCII_Value() {
	
	char c;
	cout<<"Enter a character: ";
	cin>>c;
	cout<<"ASCII value of "<<c<<" = "<<int(c)<<endl;
	int i;
	cout<<"Enter a number: ";
	cin>>i;
	cout<<"ASCII value of "<<i<<" = "<<char(i)<<endl;
	
	
}
void Convert_Days_into_YWD() {
	
	int inp;
	int year;
	int week;
	int day;
	cout<<"Enter number of days: ";
	cin>>inp;
	year=inp/365;// ok
	week=(inp%365)/7;// get weeks from remaining from years
	day=(inp%365)%7;//get days from remaining weeks
	
	cout<<year<<" "<<week<<" "<<day;
	cout<<endl;
}
int main() {

	//	Temp_Conv();
	//  Interest_Calc();
	//  Swap_Without_Third_Number();
	//  Find_ASCII_Value();	
	//  Convert_Days_into_YWD();

	
	
	return 0;
}
