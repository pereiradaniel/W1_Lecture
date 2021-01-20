// ~cornel.barna/submit workshop1

#include <iostream>
#include <cstdlib>
using namespace std;
int main(int argc, char* argv[]) {
	cout << "The app received [" << argc << "] parameters.\n";
	for (int i = 0; i < argc; ++i) {
		cout << i << ". " << argv[i] << "\n";
	}

	int val = std::atoi(argv[4]);
	cout << "The number is [" << val << "]" << "\n";

}

// argc: number of strings in the array argv
// argv: array of strings