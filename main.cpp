#include <iostream>
using namespace std;

void encryption(int key, string text) {
	char** tablica = new char*[key];
	for (int i = 0; i < key; i++)
		tablica[i] = new char[text.length()];

	for (int i = 0; i < key; i++)
		for (int j = 0; j < text.length(); j++)
			tablica[i][j] = '*';


	int pos = 0;
	bool goDown = true;
	for (int i = 0; i < text.length(); i++) {

		if (goDown == true && pos != key - 1) {
			tablica[pos][i] = text[i];
			pos++;
		}
		else if (goDown == true && pos == key - 1) {
			tablica[pos][i] = text[i];
			pos--;
			goDown = false;
		}
		else if (goDown == false && pos != 0) {
			tablica[pos][i] = text[i];
			pos--;
		}
		else if (goDown == false && pos == 0) {
			tablica[pos][i] = text[i];
			pos++;
			goDown = true;
		}
	}

	for (int i = 0; i < key; i++)
		for (int j = 0; j < text.length(); j++)
			if(tablica[i][j] !='*')
				cout <<tablica[i][j];

	for (int i = 0; i < key; i++)
		delete[] tablica[i];
	delete[] tablica;
}

void decryption(string text) {
	for (size_t i = 0; i < text.length() - 1; i += 2)
		swap(text[i], text[i + 1]);
}

int main() {
	string text;
	int key = 1;

	cout << "Podaj napis: ";
	cin >> text;
	cout << "Podaj klucz: ";
	cin >> key;
	cout << "encryptet to: ";
	encryption(key,text);

	return 0;
}