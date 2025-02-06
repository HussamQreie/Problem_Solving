#include<iostream>
using namespace std;
int main() {
	
	//size of Cube! e.g (Cubic water tank)
	float l=0,w=0,h=0;
	float cubic_meter=0;
	
	
	cout<<"Enter Cubic Meter value: ";
	cin>>cubic_meter; 
	
	l=cubic_meter;
	w=cubic_meter;
	h=cubic_meter;
	
	float cube_volume=l*w*h;
	cout<<"Cube Size = "<<cube_volume<<" m ";
	
	return 0;
}
