#include <iostream>
#include <map>
using namespace std;

string encryptToMorse(string& text) {
    string morseCode;
    map<char, string> morse = {
        {'A', ".-"}, {'B', "-..."}, {'C', "-.-."},
        {'D', "-.."}, {'E', "."}, {'F', "..-."},
        {'G', "--."}, {'H', "...."}, {'I', ".."},
        {'J', ".---"}, {'K', "-.-"}, {'L', ".-.."},
        {'M', "--"}, {'N', "-."}, {'O', "---"},
        {'P', ".--."}, {'Q', "--.-"}, {'R', ".-."},
        {'S', "..."}, {'T', "-"}, {'U', "..-"},
        {'V', "...-"}, {'W', ".--"}, {'X', "-..-"},
        {'Y', "-.--"}, {'Z', "--.."}
    };

    for (char ch : text)
          morseCode += morse[ch] + " ";

    return morseCode;
}

int main() {
    string text;
    cout << "Insert text: ";
    cin >> text;
    string morseCode = encryptToMorse(text);
    cout << "Encryptet to: " << morseCode << std::endl;

    return 0;
}
