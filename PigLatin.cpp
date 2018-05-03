#include <iostream>
using namespace std;

char* ConvertToPigLatin(char* s) {
	bool isCap = false;
	if (s[0] >= 65 && s[0] <= 90) {
		isCap = true;
		s[0] += 32;
	}

	char* string = (char*)malloc(100 * sizeof(char));
	for (size_t i = 0; i < strlen(s); i++)
		string[i] = s[i + 1];
	size_t l = strlen(string);
	if (isCap) string[0] -= 32;
	string[l] = s[0];
	string[l + 1] = 'a';
	string[l + 2] = 'y';
	string[l + 3] = '\0';
	return string;
}

int main() {
	char* s = new char[100];
	cout << "input a string: ";
	cin.getline(s, 100);
	char* next_tokens;
	char* token = strtok_s(s, " ", &next_tokens);
	while (token) {
		cout << ConvertToPigLatin(token) << " ";
		token = strtok_s(NULL, " ", &next_tokens);
	}
	
	return 0;
}
