#include <iostream>
#include <fstream>
using namespace std;

string mirrorReflection(const string text) {
    string reflection;
    for (int i = 0; i < text.length(); i++)
        reflection += text[text.length() - 1 - i];
    return reflection;
}

int CountOfText(const string text, fstream &slowa) {
    int count = 0;
    string temp;
    slowa.open("slowa.txt");

    while (!slowa.eof()) {
        slowa >> temp;
        if (temp == text)
            count++;
    }
    slowa.close();
    return count;
}

int main() {
    string text;
    fstream slowa;
    fstream nowe;
    ofstream saveFile;
    nowe.open("nowe.txt");
    saveFile.open("wynik5.txt");

    saveFile << "b) \n";

    while (!nowe.eof()) {
        nowe >> text;
        saveFile << CountOfText(text, slowa)<<" ";
        saveFile << CountOfText(mirrorReflection(text), slowa)<<endl;
    }

    nowe.close();
    saveFile.close();
    return 0;
}