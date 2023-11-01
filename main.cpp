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

string selectionSort(string napis, size_t size) {
        for (size_t i = 0; i < size -1; i++) {
            size_t index = i;
            for (size_t j = i + 1; j < size; j++) {
                if (napis[index] > napis[j])
                    index = j;
            }
            swap(napis[index], napis[i]);
        }
    return napis;
}

bool isAnagram(vector<string> strings) {

    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            if (strings[i].length() != strings[j].length())
                return false;

    vector<string> filtered(5);
    for (size_t i = 0; i < 5; i++)
        filtered[i] = selectionSort(toBigger(strings[i]), strings[i].length());

    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            if (filtered[i] != filtered[j])
                return false;
   return true;
}

int main() {
    fstream file;
    ofstream saveFile;
    file.open("anagram.txt");
    saveFile.open("odp_4b.txt");

    saveFile << "b)\n";

    while (!file.eof()) {
        vector<string> strings(5);
        for (int i = 0; i < 5; i++)
            file >> strings[i];

        if (isAnagram(strings)) {
            for (int i = 0; i < 5; i++)
                saveFile << strings[i] << " ";
            saveFile << endl;
        }
    }
    file.close();
    saveFile.close();
    return 0;
}