#include <iostream>
using namespace std;

string encryption(int key, string text) {
	string result;
	char** tablica = new char* [key];
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
			if (tablica[i][j] != '*')
				result += tablica[i][j];

	for (int i = 0; i < key; i++)
		delete[] tablica[i];
	delete[] tablica;

	return result;
}

string decryption(int key, string text) {
	string result;
	char** tablica = new char* [key];
	for (int i = 0; i < key; i++)
		tablica[i] = new char[text.length()];

	for (int i = 0; i < key; i++)
		for (int j = 0; j < text.length(); j++)
			tablica[i][j] = '*';

	int pos = 0;
	bool goDown = true;
	for (int i = 0; i < text.length(); i++) {
		tablica[pos][i] = 'X';
		if (goDown == true && pos != key - 1) {
			pos++;
		}
		else if (goDown == true && pos == key - 1) {
			pos--;
			goDown = false;
		}
		else if (goDown == false && pos != 0) {
			pos--;
		}
		else if (goDown == false && pos == 0) {
			pos++;
			goDown = true;
		}
	}

	int index = 0;
	for (int i = 0; i <key ; i++)
		for (int j = 0; j <text.length() ; j++)
			if (tablica[i][j] == 'X')
				tablica[i][j] = text[index++];
	pos = 0;
	goDown = true;
	for (int i = 0; i < text.length(); i++) {
		result += tablica[pos][i];
		if (goDown == true && pos != key - 1) {
			pos++;
		}
		else if (goDown == true && pos == key - 1) {
			pos--;
			goDown = false;
		}
		else if (goDown == false && pos != 0) {
			pos--;
		}
		else if (goDown == false && pos == 0) {
			pos++;
			goDown = true;
		}
	}

	for (int i = 0; i < key; i++)
		delete[] tablica[i];
	delete[] tablica;

	return result;
}

int main() {
	string text;
	int key = 1;

	cout << "Podaj napis: ";
	cin >> text;
	cout << "Podaj klucz: ";
	cin >> key;

	string code = encryption(key, text);
	cout << "encryptet to: " << code << endl;
	string decoded = decryption(key, code);
	cout << "decryptet to: " << decoded;
	
	return 0;
}