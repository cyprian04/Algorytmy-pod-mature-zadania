#include <iostream>
#include <fstream>
using namespace std;

bool adjacentSignsTotal220(const string text) {
    for (size_t i = 0; i < text.length() - 1; i++)
        if (text[i] + text[i + 1] == 220)
            return true;

    return false;
}

int main() {
    string text;
    fstream file;
    ofstream saveFile;
    file.open("hasla.txt");
    saveFile.open("wynik4c.txt");

    while (!file.eof()) {
        file >> text;
        if (adjacentSignsTotal220(text))
            saveFile << text << endl;
    }

    file.close();
    saveFile.close();
    return 0;
}