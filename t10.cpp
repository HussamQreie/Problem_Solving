#include<iostream>
using namespace std; 
int main() {
	
	int v1,v2,v3;
	while(1){
		cout<<"Enter value of v1: ";
		cin>>v1;
		cout<<"Enter value of v2: ";
		cin>>v2;
		cout<<"Enter value of v3: ";
		cin>>v3;
		if(v1>v2&&v1>v3)
			cout<<"Larger number is v1";
		else if(v2>v1&&v2>v3)
			cout<<"Larger number is v2";
		else if(v3>v1&&v3>v2)
			cout<<"Larger number is v3";
		else
		{
			if(v1==v2||v2==v3||v3==v1)
				cout<<"Can't Specify one, Try again!";	
		}
		cout<<endl;
	}
	
	
	return 0;
}
