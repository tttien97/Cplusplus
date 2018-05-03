#include "iostream"
using namespace std;

char* ConvertDecimalToHexadecimal(unsigned int value)
{
	char* result = (char*)malloc(10 * sizeof(char));
	char number[] = { 'A', 'B', 'C', 'D', 'E', 'F' };
	int n = value, j = 0, k=0;

	while (n != 0) {
		char t;
		int temp = n % 16;
		if (temp < 10) {
			t = '0' + temp;
			//temp += 48;
		} else {
			int i = temp % 10;
			t = number[i];
			//temp += 55;
		}
		//result[j++] = temp;
		result[j++] = t;
		n /= 16;
	}
	result[j++] = '\0';
	char* result2 = (char*)malloc(10 * sizeof(char));
	for (int i = strlen(result)-1; i >= 0; i--)
		result2[k++] = result[i];
	result2[k++] = '\0';
	return result2;
}

int main() {
	int n;
	cout << "Input number: ";
	cin >> n;
	cout << ConvertDecimalToHexadecimal(n) << endl;
	return 0;
}