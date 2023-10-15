#include <iostream>
#include <fstream>
#include <map>
using namespace std;

int main() {
    string text;
    fstream file;
    ofstream saveFile;
    file.open("slowa.txt");
    saveFile.open("wynik5.txt");
    map<int, int> liczbyK;

    while (!file.eof()) {
        file >> text;
        liczbyK[text.length()]++;
    }

    saveFile << "a)\n";

    for (auto c : liczbyK)
        saveFile << "liczba n = " << c.first << " liczba wierszy: " << c.second << endl;

    file.close();
    saveFile.close();
    return 0;
}