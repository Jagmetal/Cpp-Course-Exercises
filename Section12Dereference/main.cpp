#include <iostream> 
#include <vector>

using namespace std;

int main() {
	
	int score {100};
	int *score_ptr {&score};
	
	cout << *score_ptr << endl;
	
	*score_ptr = 200;
	
	cout << *score_ptr << endl;
	cout << score << endl;
	
	cout << endl;
	
	cout << "\n-----------------------------------" << endl;
	vector<string> curries {"Butter", "Tandoori", "Afghani"};
	vector<string> *vector_ptr {nullptr};
	
	vector_ptr = &curries;
	
	cout << "Curries: " << (*vector_ptr).at(0) << endl;
	
	cout << "Curries: ";
	for (auto currie: *vector_ptr)
		cout << currie << " ";
	cout << endl;	
	
	return 0;
}