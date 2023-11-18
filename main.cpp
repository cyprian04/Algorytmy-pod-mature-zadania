#include <iostream>
using namespace std;

void encryption(string& text, int key) {
	for (size_t i = 0; i < text.length() - 2; i += 3) {
		swap(text[i], text[i + 2]);
		text[i] += 10;
		text[i + 2] += 10;
	}
}

void decryption(string& text, int key) {
	for (size_t i = 0; i < text.length() - 2; i += 3) {
		swap(text[i], text[i + 2]);
		text[i] -= 10;
		text[i + 2] -= 10;
	}
}

int main() {
	int key = 0;
	string text;

	cout << "Podaj napis: ";
	cin >> text;
	cout << "Podaj klucz: ";
	cin >> key;

	encryption(text,key);
	cout << "encryptet to: " << text;
	decryption(text,key);
	cout << "\ndecryptet to: " << text;

	return 0;
}