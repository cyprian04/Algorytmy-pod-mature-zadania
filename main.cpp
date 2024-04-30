#include <iostream>
#include <fstream>
using namespace std;

string decryption(string key, string text) {
	string result;
	size_t index = 0;
	for (size_t i = 0; i < text.length(); i++, index++) {
		if (index == key.length())
			index = 0;
		if (text[i] - (key[index] - 64) >= 'A')
			result += text[i] - (key[index] - 64);
		else
			result += text[i] - (key[index] - 64) + 26;
	}
	return result;
}

int main() {
	fstream file;
	fstream keys;
	ofstream saveFile;
	file.open("sz.txt");
	keys.open("klucze2.txt");
	saveFile.open("wynik5b.txt");

	string text;
	string key;
	while (!file.eof()){
		file >> text;
		keys >> key;
		saveFile << decryption(key, text) << endl;
	}

	file.close();
	keys.close();
	saveFile.close();
	return 0;
}