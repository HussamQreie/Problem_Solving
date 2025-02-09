#include <iostream>
#include <cstring> // Required for strlen()
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
void Add_in_2d_array() {  
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
void Count_Vowels_and_Consonants_in_string() {
	char pattern[100]; // Increased size to avoid overflow
	cout << "Enter a string: ";
	cin.getline(pattern, 100); // This will read only one word. Use `cin.getline(pattern, 100);` for full sentences.
	
	int count_v = 0, count_c = 0;
	
	for (int i = 0; i < int(strlen(pattern)); i++) {
		char ch = tolower(pattern[i]); // Convert to lowercase to simplify condition
		if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
			count_v++;
			cout << "Vowel added!" << endl<<endl;
		} 
		
		else if (isalpha(ch)) { // Check if it is a letter
			count_c++;
			cout << "Consonant added!" << endl<<endl;
		}
	}
	
	cout << "Vowels: " << count_v << endl;
	cout << "Consonants: " << count_c << endl;
}
void Reverse_String() {
	char str[100]; // String array to store input
	
	cout << "Enter a string: ";
	cin.getline(str, 100); // Allows multi-word input
	
	int start = 0, end = strlen(str) - 1;
	
	// Recursive function to reverse the string
	auto reverseString = [&](auto&& self, int start, int end) -> void {
		if (start >= end) // Base case
			return;
		swap(str[start], str[end]); // Swap characters
		self(self, start + 1, end - 1); // Recursive call
	};
	
	reverseString(reverseString, start, end); // Call recursion
	
	cout << "Reversed string: " << str << endl;
}
int main() {

//	Max_Min_in_1d_array();
//  Add_in_2d_array();
//  Count_Vowels_and_Consonants_in_string();
//  Reverse_String();
}

