#include <iostream>
#include <fstream>
using namespace std;

int sumOfDigits(const string text) {
    int sum = 0;
    for (size_t i = 0; i < text.length(); i++)
        sum += (text[i] - 48);
    return sum;
}

int main() {
    string text;
    fstream file;
    ofstream saveFile;
    file.open("cyfry.txt");
    saveFile.open("zadanie4.txt");
    int maxNumCount = 0;
    int minNumCount = 81; // max możliwość
    string minNum, maxNum;

    while (!file.eof()) {
        file >> text;

        if (sumOfDigits(text) > maxNumCount) {
            maxNumCount = sumOfDigits(text);
            maxNum = text;
        }
        if (sumOfDigits(text) < minNumCount) {
            minNumCount = sumOfDigits(text);
            minNum = text;
        }
    }

    saveFile << "b) " << endl;
    saveFile << "Liczba o największej sumie cyfr: " << maxNum << endl;
    saveFile << "Liczba o najmniejszej sumie cyfr: " << minNum << endl;


    file.close();
    saveFile.close();
    return 0;
}