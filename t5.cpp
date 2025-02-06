#include<iostream>
using namespace std;
int main() {
	
	for(int i=1;i<=7;i++) {
		
		for(int j=1;j<=7;j++) {
			
			if(i==1 || i==7) 
				cout<< "* ";
			else if(j==1 || j==7)
				cout<< "* ";
			else
				cout<<"  ";
		}
		cout<<endl;
	}
	
	cout<<endl;
	
	for(int i=1;i<=7;i++) {
		for(int j=1;j<=7;j++) {
			cout<<"* ";
		}
		cout<<endl;
	}
	
	cout<<endl;
	
	for(int i=1;i<=7;i++) {
		for(int j=1;j<=i;j++) {
			cout<<"* ";
		}
		cout<<endl;
	}
	
	cout<<endl;
	
	for(int i=1;i<=7;i++) {
		for(int j=1;j<=8-i;j++) {
			cout<<"* ";
		}
		cout<<endl;
	}
	
	cout<<endl;
	
	for(int i=1;i<=7;i++) {
		for(int k=1;k<=8-i;k++) {
			cout<<"  ";
		}
		for(int j=1;j<=i*2-1;j++) {
			cout<<"* ";
		}
		cout<<endl;
	}
	cout<<endl;
	
	for(int i=1;i<=7;i++) {
		for(int k=1;k<=i;k++) {
			cout<<" ";
		}
		for(int j=1;j<=8-i;j++) {
			cout<<" *";
		}
		cout<<endl;
	}
	
	cout<<endl;
	
	for(int i=1;i<=7;i++) {
		
		for(int k=1;k<=8-i;k++) {
			cout<<" ";
		}
		
		for(int j=1;j<=i;j++) {
			cout<<"*";
		}
		cout<<endl;
	}
	
	cout<<endl;
	
	for(int i=1;i<=7;i++) {
		
		for(int k=1;k<=i;k++) {
			cout<<" ";
		}
		
		for(int j=1;j<=8-i;j++) {
			cout<<"*";
		}
		cout<<endl;
	}
	
	cout<<endl;
	
	for(int i=1;i<=4;i++) {
		
		for(int k=1;k<=5-i;k++) {
			cout<<" ";
		}
		
		for(int j=1;j<=i;j++) {
			
			cout<<"* ";
			
				
		}
		cout<<endl;
		}
		
	for(int i=1;i<=3;i++) {
		
		for(int k=1;k<=i+1;k++) { // +1 is the trick to make them alined
			cout<<" ";
		}
		
		for(int j=1;j<=4-i;j++) {
			
			cout<<"* ";
			
			
		}
		cout<<endl;
	}
	
	
	return 0;
}
