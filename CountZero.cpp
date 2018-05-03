#include <iostream>
using namespace std;

int CountZero(unsigned int number) {
	int decimal = number, temp, count = 0;
	while (decimal != 0) {
		temp = decimal % 2;
		if (temp == 0) {
			count++;
		}
		decimal = decimal / 2;
	}
	return count;
}

int main() {
	int n;
	cout << "Input a number: ";
	cin >> n;
	cout << "Count: " << CountZero(n) << endl;
	return 0;
}
