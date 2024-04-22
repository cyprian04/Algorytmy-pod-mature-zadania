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
    ofstream saveFile; // ofstream utworzy nowy plik jeśli ten nie istnieje. sam fstream nic nie utworzy!!!
    file.open("dane.txt"); // open otwiera plik
    saveFile.open("odp1.txt");

    while (!file.eof()) { /// dopóki nie dojdzie do końca pliku
        file >> text;
        if (isPalindrom(text))
            saveFile << text << endl;
    }

    file.close(); // close zamyka
    saveFile.close();
    return 0;
}