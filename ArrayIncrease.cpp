#include <iostream>
using namespace std;

int* LongestArray(int* a, int* b) {
	int count1 = 0, count2 = 0;
	for (int i = 0; i < sizeof(a); i++) {
		count1++;
	}
	for (int i = 0; i < sizeof(b); i++) {
		count2++;
	}
	if (count1 < count2) return b;
	else return a;
}

int main() {
	int a[] = { 1, 2, 3 };
	int b[] = { 4, 5 };
	int* c = LongestArray(a, b);

}
