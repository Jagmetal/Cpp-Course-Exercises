#include <iostream> 
#include <string>

using namespace std;

int main() {
	
	string s0;
	string s1 {"Apple"};
	string s2 {"Banana"};
	string s3 {"kiwi"};
	string s4 {"apple"};
	string s5 {s1}; //apple
	string s6 {s1, 0, 3}; //app
	
	cout << s0 << endl;
	cout << s0.length() << endl; // empty string
	
	
	
	cout << endl;
	return 0;
}