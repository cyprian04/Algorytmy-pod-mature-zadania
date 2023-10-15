#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string text;
    fstream file;
    ofstream saveFile;
    file.open("napisy.txt");
    saveFile.open("zadanie4.txt");
    int counter = 0;

    while (!file.eof()) {
        file >> text;
        if (text.length() % 2 == 0)
            counter++;
        
    }
    saveFile << "a) " << counter << endl;

    file.close();
    saveFile.close();
    return 0;
}