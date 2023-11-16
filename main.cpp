#include <iostream>
#include <sstream>
using namespace std;

string encryption(istringstream &tekst) {
	string result;
	string temp;
	while (tekst >> temp) {
		for (size_t j = 0; j < temp.length(); j++)
			result += temp[temp.length() - 1 - j];
		result += ' ';
	}
	return result;
}

int main() {
	string tekst;
	cout << "Podaj tekst: ";
	getline(cin, tekst);
	istringstream stream(tekst);

	cout << "encryptet to: " << encryption(stream);
	return 0;
}