#include <iostream>
#include <fstream>
using namespace std;

bool isIncreasing(const string text) {
    for (size_t i = 0; i < text.length() - 1; i++)
        if (text[i] >= text[i + 1])
            return false;

    return true;
}

int main() {
    string text;
    fstream file;
    ofstream saveFile;
    file.open("cyfry.txt");
    saveFile.open("zadanie4.txt");

    saveFile << "c) " << endl;

    while (!file.eof()) {
        file >> text;
        if (isIncreasing(text))
            saveFile << text << endl;
    }

    file.close();
    saveFile.close();
    return 0;
}