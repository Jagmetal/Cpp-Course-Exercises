#include <iostream>
#include <vector>

using namespace std;

// Function declarations
void display_menu();
char get_selection();
void handle_display(const vector<int> &v);
void handle_add(vector<int> &v);
void handle_mean(const vector<int> &v);
void handle_smallest(const vector<int> &v);
void handle_largest(const vector<int> &v);
void handle_quit();
void handle_unknown();
void display_list(const vector<int> &v);
void handle_find(const vector<int> &v);

bool find(const vector<int> &v, int target);

int main() {
    vector<int> numbers;
    char selection{};

    do {
        display_menu();
        selection = get_selection();
        switch (selection) {
        case 'P':
            handle_display(numbers);
            break;
        case 'A':
            handle_add(numbers);
            break;
        case 'M':
            handle_mean(numbers);
            break;
        case 'S':
            handle_smallest(numbers);
            break;
        case 'L':
            handle_largest(numbers);
            break;
		case 'F':
			handle_find(numbers);
			break;
        case 'Q':
            handle_quit();
            break;
        default:
            handle_unknown();
        }
    } while (selection != 'Q');
    cout << endl;
    return 0;
}

void display_menu() {
    cout << "\nP - Print numbers" << endl;
    cout << "A - Add a number" << endl;
    cout << "M - Display mean of the numbers" << endl;
    cout << "S - Display the smallest number" << endl;
    cout << "L - Display the largest number" << endl;
	cout << "F - Find a number" << endl;
    cout << "Q - Quit" << endl;
    cout << "\nEnter your choice: ";
}

char get_selection() {
    char selection{};
    cin >> selection;
    return toupper(selection);
}

void handle_display(const vector<int> &v) {
    if (v.size() == 0)
        cout << "[] - the list is empty" << endl;
    else
        display_list(v);
}

void display_list(const vector<int> &v) {
    cout << "[ ";
    for (auto num : v)
        cout << num << " ";
    cout << "]" << endl;
}

void handle_add(vector<int> &v) {
    int num_to_add{};
    cout << "Enter an integer to add to the list: ";
    cin >> num_to_add;
    v.push_back(num_to_add);
    cout << num_to_add << " added" << endl;
}

void handle_mean(const vector<int> &v) {
    if (v.size() == 0) {
        cout << "Cannot calculate mean - the list is empty" << endl;
        return;
    }

    double mean = 0;
    for (int num : v) {
        mean += num;
    }
    mean /= v.size();

    cout << "Mean: " << mean << endl;
}

void handle_smallest(const vector<int> &v) {
    if (v.size() == 0) {
        cout << "Cannot find the smallest number - the list is empty" << endl;
        return;
    }

    int smallest = v[0];
    for (int num : v) {
        if (num < smallest) {
            smallest = num;
        }
    }

    cout << "Smallest number: " << smallest << endl;
}

void handle_largest(const vector<int> &v) {
    if (v.size() == 0) {
        cout << "Cannot find the largest number - the list is empty" << endl;
        return;
    }

    int largest = v[0];
    for (int num : v) {
        if (num > largest) {
            largest = num;
        }
    }

    cout << "Largest number: " << largest << endl;
}

void handle_find(const vector<int> &v) {
	int target{};
	cout << "Enter the number to find: ";
	cin >> target;
	if(find(v,target))
		cout << target << " was found" << endl;
	else
		cout << target << " was not found" << endl;
}

bool find(const vector<int> &v, int target) {
	for (auto num: v)
		if(num == target)
			return true;
	return false;		
}

void handle_quit() {
    cout << "Quitting the program. Goodbye!" << endl;
}

void handle_unknown() {
    cout << "Unknown command" << endl;
}
