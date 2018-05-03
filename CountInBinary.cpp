#include <iostream>
using namespace std;

void generateBinary(int len, string cur = "")	// recursion state: integer, string
{
	if (len == 0)
	{
		//cout << cur << "\n";
		printf("%s\n", cur);
		return;
	}

	// At each level, we branch twice...draw this tree
	generateBinary(len - 1, cur + "0");

	generateBinary(len - 1, cur + "1");
}

int main() {
	int n;
	cout << "Input n: ";
	cin >> n;
	generateBinary(n);
	return 0;
}
