#include <iostream>
#include <fstream>
using namespace std;

string encryption(string key, string& text) {
	string result;
	size_t index = 0;
	for (size_t i = 0; i < text.length(); i++, index++){
		if (index = key.length())
			index = 0;
		if (text[i] + (key[index] - 64)<= 'Z')
			result += text[i] + (key[index] - 64);
		else
			result += text[i] + (key[index] - 64) - 26;
	}
	return result;
}

int main() {
	fstream file;
	fstream keys;
	ofstream saveFile;
	file.open("tj.txt");
	keys.open("klucze1.txt");
	saveFile.open("wynik5a.txt");

	string text;
	string key;
	while (!file.eof()){
		file >> text;
		keys >> key;
		saveFile << encryption(key, text) <<endl;
	}

	file.close();
	keys.close();
	saveFile.close();
	return 0;
}