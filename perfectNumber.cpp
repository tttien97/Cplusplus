#include <iostream>
using namespace std;

bool isPerfectNumber(unsigned int n) {
	int count = 0;
	if (n <= 1) return false;
	for (int i = 1; i < n; i++) {
		if (n % i == 0) {
			count += i;
		}
	}
	if (count == n) return true;
	else return false;
}

int main() {
	int n;
	cout << "Input n: ";
	cin >> n;
	if (isPerfectNumber(n)) cout << "This is a perfect number." << endl;
	else cout << "This is not a perfect number." << endl;
	return 0;
}
