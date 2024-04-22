#include <map>
#include <string>
#include <iostream>
using namespace std;

int main(){
	map<char, int> signs;
	string text;
	getline(cin, text);

	for (auto &s : text)
		if (s != ' ') {
			if (s >= 'A' && s <= 'Z')
				s += 'a' - 'A';
			signs[s]++;
		}

	for (const auto &s : signs)
		cout << s.first << " wystapilo: " << s.second<<'\n';

	return 0;
}