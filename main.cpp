#include <iostream>
#include <fstream>
using namespace std;

bool equalDigits(const string text) {
    int oneCount = 0;
    int zeroCount = 0;

    for (const auto c : text) {
        if (c == '1')
            oneCount++;
        else if (c == '0')
            zeroCount++;
    }
    return oneCount == zeroCount;
}

int main() {
    string text;
    fstream file;
    ofstream saveFile;
    file.open("napisy.txt");
    saveFile.open("zadanie4.txt");
    int counter = 0;

    while (!file.eof()) {
        file >> text;
        if (equalDigits(text))
            counter++;
    }

    saveFile <<"b) " << counter;

    file.close();
    saveFile.close();
    return 0;
}