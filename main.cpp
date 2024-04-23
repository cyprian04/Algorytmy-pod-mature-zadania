#include <iostream>
#include <map>
#include <fstream>
using namespace std;

int main() { 
 
    string text;
    fstream file;
    ofstream saveFile;
    file.open("napisy.txt");
    saveFile.open("odp5.txt");
    map<int, int> liczbyK;

    while (!file.eof()) {
        file >> text;
        liczbyK[text.length()]++;
    }

    for (const auto c : liczbyK)
        saveFile << " wyrazów o długości k = " << c.first << " jest ich: " << c.second << endl;

    file.close();
    saveFile.close();
    return 0;
 }