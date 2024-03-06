#include <iostream> 
#include <string>

using namespace std;

int main() {
	
	string input;
	cout << "Enter a string: ";
	cin >> input;
	
	int n = input.length();
	
	for (int i = 0; i < n; i++) {
		
		for (int j = 0; j < n - i - 1; j++) {
			cout << ' ';	
		}
		
		for (int j = 0; j <= i; j++) {
			cout << input[j];
		}
		
		for (int j = i - 1; j >= 0; j--) {
			cout << input[j];	
		}
		
		cout << endl;
	}
	
	
}