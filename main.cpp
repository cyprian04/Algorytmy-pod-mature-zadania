#include <iostream>
using namespace std;

void encryption(int key, string& text) {
	key %= 26;
	for (size_t i = 0; i < text.length(); i++)
		if (text[i] + key <= 'Z')
			text[i] += key;
		else
			text[i] += key - 26;
}

int main() {
	string tekst;
	int key = 0;

	cout << "Podaj tekst: ";
	cin >> tekst;
	cout << "Podaj klucz: ";
	cin >> key;

	encryption(key, tekst);
	cout <<"encryptet to: "<< tekst;
	return 0;
}