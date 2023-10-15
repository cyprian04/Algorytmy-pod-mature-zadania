#include <iostream>
#include <fstream>
using namespace std;

bool haveOnlyOneSign(const string text, const char sign) { 
    for (size_t i = 0; i < text.length(); i++)
        if (text[i] != sign)
            return false;
    return true;
}

int main() {
    string text;
    fstream file;
    ofstream saveFile;
    file.open("napisy.txt");
    saveFile.open("zadanie4.txt");
    int counterZero = 0;
    int counterOne = 0;

    while (!file.eof()) {
        file >> text;
        if (haveOnlyOneSign(text, '0'))
            counterZero++;
        else if (haveOnlyOneSign(text, '1'))
            counterOne++;
    }

    saveFile << "c)\n" << "Liczba napisów z samych 0: "<<counterZero << endl;
    saveFile << "Liczba napisów z samych 1: " << counterOne << endl;


    file.close();
    saveFile.close();
    return 0;
}