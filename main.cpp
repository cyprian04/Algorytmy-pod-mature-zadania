#include <iostream>
#include <fstream>
using namespace std;

int sumOfTheNumDigits(const string text) {
    int sum = 0;
    for (size_t i = 0; i < text.length(); i++)
        sum += int(text[i] - 48);
 
    return sum;
}

int main() { 
    string maxNum;
    string minNum;
    int maxNumSum = 0;
    int minNumSum = 81;   

    string text;
    ifstream file;
    ofstream saveFile;
   
    file.open("cyfry.txt");
    saveFile.open("odp2.txt");

    while (!file.eof()) {
        file >> text;
        int currentNumSum = sumOfTheNumDigits(text);

        if (currentNumSum < minNumSum) {
            minNumSum = currentNumSum;
            minNum = text;
        }
        if (currentNumSum > maxNumSum) {
            maxNumSum = currentNumSum;
            maxNum = text;
        }
    }

    saveFile << "b)\n" << "min: " << minNum << "\nmax: " << maxNum;

    file.close();
    saveFile.close();
    return 0;
 }