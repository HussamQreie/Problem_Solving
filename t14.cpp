#include<iostream>
#include<cstdlib> // contains rand()
#include<ctime> // contains   time()
using namespace std;
void Number_Guessing_Game_if_else_and_while_loop() {
	srand(time(0));
	int random_number=rand()%100+1; //1 to 99+1 = 1-100
	int guessing_number=0;//initializing value

	cout<<"Game rules: 1-29      30-49  50-69  70-100"<<endl;
	cout<<"            _______   _____  _____  ________"<<endl;
	cout<<"            Too Low    Low    High  Too High"<<endl;
	
	
	while(random_number!=guessing_number){
		cout<<"Guess a number: ";
		cin>>guessing_number;
		
		if(random_number>=70&&random_number<=100)
			cout<<"Too high! Try again.";
		else if(random_number>=50&&random_number<=69)
			cout<<"high! Try again.";
		else if(random_number>=30&&random_number<=49)
			cout<<"Low! Try again.";
		else if(random_number>=1&&random_number<=29)
			cout<<"Too Low! Try again.";
		else if(random_number==guessing_number)
			break;
		
		cout<<endl;
	}
	cout<<"Congratulations! You gueessed it right.";
	
}
void Simple_ATM_System_menu() {
	cout<<"ATM Menu:"<<endl<<endl;
	cout<<"Check balance enter 1"<<endl;
	cout<<"Deposit money enter 2"<<endl;
	cout<<"Withdraw money enter 3"<<endl;
	cout<<"Exit enter 4"<<endl<<endl;
	
	int value=0;
	int balance=0;
	int deposit=0;
	int withdraw=0;
	
	
	while(value!=4){
		cout<<"Enter the number here: ";
		cin>>value;
		
		switch (value) {
		case 1:
			cout<<"Your balance is: "<<balance<<endl;
			break;
		case 2:
			cout<<"Enter amount to deposit: ";
			cin>>deposit;
			balance+=deposit;
			break;
		case 3:
			cout<<"Enter amount to withdraw: ";
			cin>>withdraw;
			balance=balance-withdraw;
			break;
		case 4:
			break;
		default:
			cout<<"Try Again";
		}
	
		cout<<endl;
		
	}
	
	if(value==4)
		cout<<"You exited!";
	
	
}
void Multiplication_Table_Generator() {
	
	int num;
	cout<<"Enter a number: ";
	cin>>num;
	for(int i=1;i<=10;i++) {
		
		cout<<num<<" * "<<i<<" = "<<num*i<<endl;
	}
	
	
	
}
void Even_and_Odd_Counter() {
	
	int entry=0;
	int even_sum=0;
	int odd_sum=0;
	
	while(entry!=-1){
		cout<<"Enter a number (to exit enter -1) : ";
		cin>>entry;
		
		if(entry==-1){
			continue;
		}
		else if(entry%2!=0){
			odd_sum+=entry;
			cout<<"odd number added!"<<endl;
		}
		else if ((entry%2)==0) {
			even_sum+=entry;
			cout<<"even number added!"<<endl;
			
		}
		cout<<endl;	
	}
	cout<<"Sum of odd numbers = "<<odd_sum<<endl;
	cout<<"Sum of even numbers = "<<even_sum<<endl;
}
void Grade_Calculator() {
	
	int percentage;
	while(true){
		cout<<"Enter your percentage: ";
		cin>>percentage;
		if(percentage>=90&&percentage<=100) {
			cout<<"Your grade: A";
		}
		else if(percentage>=80&&percentage<=89) {
			cout<<"Your grade: B";
		}
		else if(percentage>=70&&percentage<=79) {
			cout<<"Your grade: C";
		}
		else if(percentage>=60&&percentage<=69) {
			cout<<"Your grade: D";
		}
		else if(percentage<=59) {
			cout<<"Your grade: F";
		}
		else {
			cout<<"Try Again";
		}
		
		cout<<endl;
	}
	
	cout<<"Try Again";

}
int main() {
	
	//Number_Guessing_Game_if_else_and_while_loop();
	//Simple_ATM_System_menu();
	//Multiplication_Table_Generator();
	//Even_and_Odd_Counter();
	Grade_Calculator();
	return 0;
}
