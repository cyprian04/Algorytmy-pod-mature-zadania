#include <iostream>
using namespace std;

void encryption(string& text) {
	for (size_t i = 0; i < text.length() - 1; i+=2)
		swap(text[i], text[i + 1]);
}

int main() {
	string text;
	cout << "Podaj napis: ";
	cin >> text;
	encryption(text);
	cout << "encryptet to: " << text;

	return 0;
}