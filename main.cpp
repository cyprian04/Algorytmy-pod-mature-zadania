#include <iostream>
#include <fstream>
using namespace std;

string MirrorReflection(const string text) {
    string reflection;
    for (int i = 0; i < text.length(); i++)
        reflection += text[text.length() - 1 - i];
    
    return reflection;
}

int countOfText(const string text, fstream& slowa) {
    int sum = 0;
    string temp;
    slowa.open("slowa.txt");

    while (!slowa.eof())
    {
        slowa >> temp;
        if (temp == text) sum++;
    }

    slowa.close();
    return sum;
}

int main() { 
 
    string text;
    fstream nowe;
    fstream slowa;
    ofstream saveFile;
    nowe.open("nowe.txt");
    saveFile.open("odp6.txt");

    while (!nowe.eof()) {
        nowe >> text;
        saveFile << text <<" "<< countOfText(text, slowa) <<" ";
        saveFile << countOfText(MirrorReflection(text), slowa) << endl;
    }

    nowe.close();
    saveFile.close();
    return 0;
 }