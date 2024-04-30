#include <iostream>
#include <fstream>
using namespace std;

void CheckAndFixLength(string& key, const string text) {
	if (key.length() < text.length()) {
		int transitions = int(text.length() - key.length());
		for (int i = 0; 0 < transitions; transitions--){
				key += key[i++];
				if (i == key.length()) i = 0;
		}
	}
}

string encryption(string key, string& text) {
	for (size_t i = 0; i < text.length(); i++){
		if (text[i] + (key[i] - 64)<= 'Z')
			text[i] += (key[i] - 64);
		else
			text[i] += (key[i] - 64) - 26;
	}
	return text;
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
		CheckAndFixLength(key, text);
		saveFile << encryption(key, text) <<endl;
	}

	file.close();
	keys.close();
	saveFile.close();
	return 0;
}