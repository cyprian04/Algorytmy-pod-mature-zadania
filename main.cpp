#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int binToDec(string temp) {
    int result = 0;

    for (size_t i = 0; i < temp.length(); i++)
        result += int(temp[temp.length() - 1 - i]) - 48* pow(2, i);
    return result;
}

int BlocksCounter(string num) {
    char type = num[0];
    int counter = 1;
    for (size_t i = 0; i < num.length(); i++)
        if(type != num[i]){
            counter++;
            type = num[i];
        }
    return counter;
}

int main() {
    fstream file;
    ofstream saveFile;
    file.open("bin.txt");
    saveFile.open("wynikMatura.txt");

    int wynik = 0;
    string temp;

    int maxVal = 0;
    string currentMaxNum = "0";

    while (!file.eof()){
        file >> temp;
        if (BlocksCounter(temp) <= 2)
            wynik++;
        if (binToDec(temp) > binToDec(currentMaxNum))
            currentMaxNum = temp;
    }

    saveFile << "2.2) " << wynik << endl;
    saveFile << "2.3) " << currentMaxNum << endl;

    file.close();
    saveFile.close();
    return 0;
}