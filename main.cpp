#include <iostream>
#include <vector>
using namespace std;

string encryption(vector<string>& tekst) {
	string result;
	for (auto element : tekst) {
		for (size_t j = 0; j < element.length(); j++)
			result += element[element.length() - 1 - j];
		result += ' ';
	}
	return result;
}

int main() {
	int size = 0;
	cout << "Podaj ilosc slow w tekstcie: ";
	cin >> size;
	vector<string> tekst(size);

	for (size_t i = 0; i < size; i++) {
		cout << "Podaj slowo nr" << i + 1<<" :";
		cin >> tekst[i];
	}

	cout << "encryptet to: " << encryption(tekst);
	return 0;
}