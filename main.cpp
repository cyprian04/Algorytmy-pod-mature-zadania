#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string text;
    fstream file;
    ofstream saveFile;
    file.open("hasla.txt");
    saveFile.open("wynik4a.txt");
    int evenCount = 0;
    int oddCount = 0;

    while (!file.eof()) {
        file >> text;
        if (text.length() % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    saveFile << "Liczba haseł o parzystej liczbie znaków: "<< evenCount << endl;
    saveFile << "Liczba haseł o nieparzystej liczbie znaków: " << oddCount << endl;

    file.close();
    saveFile.close();
    return 0;
}