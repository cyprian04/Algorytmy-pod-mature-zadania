#include <iostream>
#include <sstream>
#include <map>
using namespace std;

string encryptToMorse(string text) {
    string result;
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

    for (char sign : text)
          result += morse[sign] + " ";
    return result;
}

string decryptFromMorse(string text) {
    string signs;
    string result;
    map<string, char> reversedMorse = {
        {".-", 'A'}, {"-...", 'B'}, {"-.-.", 'C'},
        {"-..", 'D'}, {".", 'E'}, {"..-.", 'F'},
        {"--.", 'G'}, {"....", 'H'}, {"..", 'I'},
        {".---", 'J'}, {"-.-", 'K'}, {".-..", 'L'},
        {"--", 'M'}, {"-.", 'N'}, {"---", 'O'},
        {".--.", 'P'}, {"--.-", 'Q'}, {".-.", 'R'},
        {"...", 'S'}, {"-", 'T'}, {"..-", 'U'},
        {"...-", 'V'}, {".--", 'W'}, {"-..-", 'X'},
        {"-.--", 'Y'}, {"--..", 'Z'}
    };
    istringstream stream(text);

    
    while (stream >> signs){
        result += reversedMorse[signs];
    }
    return result;
}


int main() {
    string text;
    cout << "Insert text: ";
    cin >> text;

    string morseCode = encryptToMorse(text);
    cout << "Encryptet to: " << morseCode <<endl;

    string decryptetCode = decryptFromMorse(morseCode);
    cout << "Decryptet to: " << decryptetCode << endl;
    return 0;
}
