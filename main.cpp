#include <iostream>
#include <fstream>
using namespace std;

bool isIncreasing(const string text) {
    for (int i = 0; i <text.length()-1; i++)
        if(text[i] >= text[i+1])
            return false;
    return true;
}

int main() { 
 
    string text;
    ifstream file;
    ofstream saveFile;   
    file.open("cyfry.txt");
    saveFile.open("odp3.txt");

    while (!file.eof()) {
        file >> text;
        if (isIncreasing(text))
            saveFile << text << endl;
    }

    file.close();
    saveFile.close();
    return 0;
 }