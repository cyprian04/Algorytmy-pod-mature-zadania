#include <iostream>
#include <vector>
using namespace std;

vector<string> delSpecialSymbols(vector<string> strings) {
    vector<string> result;

    for (auto &s: strings) {
        string temp;
        for (size_t i = 0; i < s.length(); i++)
            if (s[i] != '.' && s[i] != ',' && s[i] !=':' && s[i] !=';' && s[i] !='!' && s[i] != '?' && s[i] != '"')
                temp += s[i];

        result.push_back(temp);
    }
    return result;
}

int main() {
    int size = 0;
    vector<string> strings;
    cout << "Podaj ile napisow chcesz wprowadzic :";
    cin >> size;

    if (size == 0) return 0;

    for (size_t i = 0; i < size; i++) {
        string temp;
        cout << "Podaj napis nr " << i + 1 << ": ";
        cin >> temp;
        strings.push_back(temp);
    }
    cout << "napisy po usunieciu specjalnych znakow \n";

    vector<string>FilteredStrings = delSpecialSymbols(strings);

    for (const auto& s : FilteredStrings)
        cout << s << endl;

    return 0;
}