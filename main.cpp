#include <iostream>
using namespace std;

string encryption(string text, string key) {
	string result;
	char vinegret2D[26][26] = {' '};
	char sign;

	if (key.length() < text.length()) key += key;

	for (int y = 0; y < 26; y++) {
		sign = 65 + y;
		for (int x = 0; x < 26; x++) {
			if (sign > 'Z')
				sign = 'A';
			vinegret2D[y][x] = sign;
			sign++;
		}
	}

	for (int i = 0; i < 26; i++) {
		for (int j = 0; j < 26; j++)
			cout << vinegret2D[i][j] << " ";
		cout << endl;
	}
	
	for (size_t i = 0; i < text.length(); i++){
		int row = text[i] - 65;
		int column = key[i] - 65;
		result += vinegret2D[row][column];
	}
	return result;
}

int main() {
	string key;
	string text;

	cout << "Podaj napis: ";
	cin >> text;
	cout << "Podaj klucz: ";
	cin >> key;
	cout << "\nencryptet to: " << encryption(text, key);
	return 0;
}