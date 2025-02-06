#include<iostream>
using namespace std;
int main() {
	
	//Area of Triangle
	float l,h;
	
	cout<<"Enter length of triangle: ";
	cin>>l;
	cout<<"Enter height of triangle: ";
	cin>>h;
	
	float area_t=.5*l*h;
	cout<<"Area of the triangle is: "<<area_t;
	
	cout<<endl;
	
	//Area of Square
	float len_or_wid;
	cout<<"Enter length/width of square: ";
	cin>>len_or_wid;
	float area_s=len_or_wid*len_or_wid;
	cout<<"Area of the square is: "<<area_s;
	return 0;
}
