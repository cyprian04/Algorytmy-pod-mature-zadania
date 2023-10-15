#include <iostream>
#include <fstream>
using namespace std;

bool isPalindrom(const string text) {
    for (int i = 0; i < text.length(); i++)
        if (text[i] != text[text.length() - 1 - i])
            return false;

    return true;
}

int main() {
    string text;
    fstream file;
    ofstream saveFile;
    file.open("dane.txt");
    saveFile.open("zadanie4.txt");

    while (!file.eof()) {
        file >> text;
        if (isPalindrom(text))
            saveFile << text << endl;
    }

    file.close();
    saveFile.close();
    return 0;
}