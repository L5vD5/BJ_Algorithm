#include <iostream>

using namespace std;

int main() {
	int N;

	cin >> N;

	for (int i = N-1; i > -1; i--) {
		for (int j = 0; j < i + 1; j++) {
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}