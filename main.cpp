#include <iostream>
#include <fstream>
using namespace std;

bool isNumEven(const string text) {
    char lastDigit = text[text.length() - 1];
    if ((lastDigit - 48) % 2 == 0)
        return true;

    return false;
}

int main() {
    string text;
    fstream file;
    ofstream saveFile;
    file.open("cyfry.txt");
    saveFile.open("zadanie4.txt");
    int counter = 0;

    while (!file.eof()) {
        file >> text;
        if (isNumEven(text))
            counter++;
    }

    saveFile << "a) " << counter << endl;

    file.close();
    saveFile.close();
    return 0;
}