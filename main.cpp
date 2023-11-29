#include <iostream>
using namespace std;

string encryption(string text, string& key) {
	string result;
	char vinegret2D[26][26] = { ' ' };
	char sign;

	while (key.length() < text.length()) key += key;

	for (int y = 0; y < 26; y++) {
		sign = 65 + y;
		for (int x = 0; x < 26; x++) {
			if (sign > 'Z')
				sign = 'A';
			vinegret2D[y][x] = sign;
			sign++;
		}
	}

	for (size_t i = 0; i < text.length(); i++) {
		int row = text[i] - 65;
		int column = key[i] - 65;
		result += vinegret2D[row][column];
	}
	return result;
}

string decryption(string text, string key) {
	string result;
	char vinegret2D[26][26] = { ' ' };
	char sign;

	for (int y = 0; y < 26; y++) {
		sign = 65 + y;
		for (int x = 0; x < 26; x++) {
			if (sign > 'Z')
				sign = 'A';
			vinegret2D[y][x] = sign;
			sign++;
		}
	}

	for (size_t i = 0; i < text.length(); i++) {
		char wantedSign = text[i];
		int column = key[i] - 65;
		for (int row = 0; row < 26; row++)
			if (wantedSign == vinegret2D[row][column])
				result += vinegret2D[row][0];
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
	string encryptet = encryption(text, key);
	cout << "\nencryptet to: " << encryptet;
	cout << "\ndecryptet to: " << decryption(encryptet, key);
	return 0;
}