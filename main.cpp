#include <iostream>
#include <sstream>
using namespace std;

string encryptionAndDecryptionBackwards(istringstream& text) {
	string result;
	string temp;
	while (text >> temp) {
		for (int i = 0; i < temp.length(); i++){
			result += temp[temp.length() - 1 - i];
		}
		result += ' ';
	}
	return result;
}

int main() {
	string tekst;
	cout << "Podaj tekst: ";

	getline(cin, tekst);
	istringstream stream1(tekst);
	tekst = encryptionAndDecryptionBackwards(stream1);
	cout << "encryptet to: " << tekst;

	istringstream stream2(tekst);
	tekst = encryptionAndDecryptionBackwards(stream2);
	cout << "\ndecryptet to: " << tekst;
	return 0;
}