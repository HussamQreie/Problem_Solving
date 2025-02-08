#include <iostream>
using namespace std;
void Max_Min_in_1d_array() {
	
	//find the maximum and minimum of array elements
	
	int n;//number of elements
	cout<<"Enter number of elements: ";
	cin>>n;
	
	int arr[n];// declare an array of specified number of elements
	cout<<"Enter "<<n<<" elements: ";
	for(int i=0;i<n;i++) {
		cin>>arr[i];
	}
	int max=arr[0];
	int min=arr[0];
	for(int i=1;i<n;i++) {
		if(arr[i]>max)
			max=arr[i];
		if(arr[i]<min)
			min=arr[i];
	}
	
	cout<<"Maximum number is: "<<max<<endl;
	cout<<"Minimum number is: "<<min<<endl;

	
}
void Add_in_2d_array() { // I'll undrstand it later...'
	int size;
	
	// User inputs matrix size
	cout << "Enter the size of the square matrix: ";
	cin >> size;
	
	int matrix1[size][size], matrix2[size][size], result[size][size];
	
	// Input first matrix
	cout << "Enter elements of first " << size << "x" << size << " matrix:" << endl;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			cin >> matrix1[i][j];
		}
	}
	
	// Input second matrix
	cout << "Enter elements of second " << size << "x" << size << " matrix:" << endl;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			cin >> matrix2[i][j];
		}
	}
	
	// Adding the matrices
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			result[i][j] = matrix1[i][j] + matrix2[i][j];
		}
	}
	
	// Displaying the resultant matrix
	cout << "Resultant Matrix after Addition:" << endl;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			cout << result[i][j] << " ";
		}
		cout << endl; // New line for matrix formatting
	}
	
}
int main() {

//	Max_Min_in_1d_array();
//  Add_in_2d_array();
}

