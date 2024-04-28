#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

string toBigger(string text) {
    for (size_t i = 0; i < text.length(); i++)
        if (text[i] >= 'a' && text[i] <= 'z')
            text[i] -= 32;
    return text;
}
                                    
string selectionSort(string text) { 
    for (size_t i = 0; i < text.length() - 1; i++){
        size_t index = i + 1;
        for (size_t j = i; j < text.length(); j++){
            if (text[index] > text[j])
                index = j;
        }
        swap(text[i], text[index]);
    }
    return text;
}

bool areAnagrams(vector<string> strings) {
    if (strings[0].length() != strings[1].length() || strings[1].length() != strings[2].length() ||
        strings[2].length() != strings[3].length() || strings[3].length() != strings[4].length())
        return false;

    vector<string> filtered(5);
    for (size_t i = 0; i < filtered.size(); i++)
        filtered[i] = selectionSort(toBigger(strings[i]));

    return filtered[0] == filtered[1] && filtered[1] == filtered[2] &&
        filtered[2] == filtered[3] && filtered[3] == filtered[4];
}

int main() {
    fstream file;
    ofstream saveFile;
    file.open("anagram.txt");
    saveFile.open("odp69.txt");

    while (!file.eof()){
        vector<string> strings(5);
        for (size_t i = 0; i < strings.size(); i++)
            file >> strings[i];

        if (areAnagrams(strings)) {
            for (size_t i = 0; i < strings.size(); i++)
                saveFile << strings[i] << " ";
            saveFile << endl;
        }
    }

    file.close();
    saveFile.close();
    return 0;
 }