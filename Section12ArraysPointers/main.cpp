#include <iostream> 

using namespace std;

int main() {
	
	int scores [] {100, 95, 89};
	
	cout << "Values of scores: " << scores << endl;
	
	int *scores_ptr{scores};
	
	cout << "Value of score_ptr: " << scores_ptr << endl;
	
	cout << endl;
	return 0;
}