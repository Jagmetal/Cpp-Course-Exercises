#include <iostream> 
#include <string>
#include <vector>

using namespace std;

void print(int);
void print(double);
void print(string);
void print(vector<string>);

void print(int num) {
	cout << "Printing int: " << num << endl;	
}

void print(double num) {
	cout << "Printing double: " << num << endl;	
}

void print(string s) {
	cout << "Printing string: " << s << endl;	
}

void print(vector<string> v) {
	cout << "Printing vector of strings: ";
	for (auto s: v)
		cout << s + " ";
	cout << endl;	
}

int main() {
	
	print(100);
	print(33.33);
	print(124.66f);
	
	print("C-style string");
	
	string s {"C++ String"};
	print(s);
	
	vector<string> three_stooges {"Larry", "Moe", "Curly"};
	print(three_stooges);
	
	cout << endl;
	return 0;
}