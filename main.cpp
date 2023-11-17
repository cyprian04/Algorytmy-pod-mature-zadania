#include <iostream>
#include <fstream>
using namespace std;

string decryption(const string text, const string key) {
	int index = 0;
	string result;
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
	ifstream stringsFile("sz.txt");
	ifstream keysFile("klucze2.txt");
	ofstream saveFile("wynik4b.txt");
	string tempString;
	string tempKey;

	saveFile << "b)\n";
	while (!stringsFile.eof()) {
		stringsFile >> tempString;
		keysFile >> tempKey;
		saveFile << decryption(tempString, tempKey) << "\n";
	}

	stringsFile.close();
	keysFile.close();
	saveFile.close();
	return 0;
}