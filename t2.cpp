#include<iostream>
#include<string>
using namespace std;
int main() {
	// empty from inside
	string Top_and_Down;
	string Middle;
	 
	Top_and_Down="* * * * * * * * * *";//10
	Middle		="* 	          *";//10
	for(int i=1;i<=10;i++) {
		
		if(i==1 || i==10) 
			cout<<Top_and_Down<<endl;
		
		else
			cout<<Middle<<endl;
		
		
		
	}
	
	// filled from inside
	
	for(int i=1;i<=10;i++) {	// 10 rows
		cout<<endl;
		for(int j=1;j<=10;j++) { 	// 10 columns
			
			cout<<" * ";
		}
		
		
		
	}
	
	return 0;
}
