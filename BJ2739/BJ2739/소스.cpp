#include <iostream>

using namespace std;

int main() {
	int N;
	cin >> N;

	for (int n = 1; n < 10; n++) {
		cout << N << " * " << n << " = " << N * n << endl;
	}

	return 0;
}