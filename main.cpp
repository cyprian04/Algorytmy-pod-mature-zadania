#include <iostream>
#include <fstream>
using namespace std;

string encryption(const string text, const string key ) {
	int index = 0;
	string result;
	for (size_t i = 0; i < text.length(); i++, index++) {
		if (index == key.length())
			index = 0;
		if (text[i] + (key[index] - 64) <= 'Z')
			result += text[i] + (key[index] - 64);
		else
			result += text[i] + (key[index] - 64) - 26;
	}
	return result;
}

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
	ifstream stringsFile("tj.txt");
	ifstream keysFile("klucze1.txt");
	ofstream saveFile("wynik4a.txt");
	string tempString;
	string tempKey;

	saveFile << "a)\n";
	while (!stringsFile.eof()) {
		stringsFile >> tempString;
		keysFile >> tempKey;
		cout << tempString <<" encryptet to: " << encryption(tempString, tempKey) <<"\n decryptet to : "<<decryption(encryption(tempString, tempKey),tempKey)<< "\n";

	}

	stringsFile.close();
	keysFile.close();
	saveFile.close();
	return 0;
}