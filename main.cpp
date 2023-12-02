#include <iostream>
#include <string>
using namespace std;

string encrypt(string text, int key) {
    string result;
    string tekstBezSpacji;
    for (char znak : text)
        if (znak !=' ')
            tekstBezSpacji += znak;

    int colN = key / 10;
    int steps = key % 10;
    char** macierz = new char*[colN];
    for (int i = 0; i < colN; i++)
        macierz[i] = new char[colN];

    int index = 0;
    for (int i = 0; i < colN; ++i)
        for (int j = 0; j < colN; ++j) 
            macierz[i][j] = tekstBezSpacji[index++];
    
    for (int i = 0; i < colN; ++i) {
        for (int j = 0; j < colN; ++j)
            cout << macierz[i][j] << " ";
        cout << endl;
    }

    index = 0;
    int maxRowIndex = colN - 1;
    for (int i = 0; i < colN; ++i) {
        for (int j = 0; j < steps; ++j, index++){
            if (index == maxRowIndex)
                index = 0;
            swap(macierz[i][index], macierz[i][index + 1]);
        }
    }

    cout << endl;
    for (int i = 0; i < colN; ++i) {
        for (int j = 0; j < colN; ++j)
            cout << macierz[i][j] << " ";
        cout << endl;
    }

    for (int i = 0; i < colN; ++i)
        for (int j = 0; j < colN; ++j)
            result+= macierz[j][i];
      
    for (int i = 0; i < colN; i++)
        delete[] macierz[i];
    delete[] macierz;

    return result;
}
//WAŻNE
string decrypt(string text, int key) {
    string result = "";
    int colN = key / 10;
    int steps = key % 10;
    char** macierz = new char* [colN];
    for (int i = 0; i < colN; i++)
        macierz[i] = new char[colN];

    int index = 0;
    for (int i = 0; i < colN; ++i)
        for (int j = 0; j < colN; ++j)
            macierz[j][i] = text[index++];

    cout << endl;
    for (int i = 0; i < colN; ++i) {
        for (int j = 0; j < colN; ++j)
            cout << macierz[i][j] << " ";
        cout << endl;
    }

    
    int maxRowIndex = colN - 1;
    index = maxRowIndex;
    for (int i = 0; i < colN; ++i) {
        for (int j = 0; j < steps; ++j, index--) {
            if (index == 0)
                index = maxRowIndex;
            swap(macierz[i][index], macierz[i][index - 1]);
        }
    }

    cout << endl;
    for (int i = 0; i < colN; ++i) {
        for (int j = 0; j < colN; ++j)
            cout << macierz[i][j] << " ";
        cout << endl;
    }

    for (int i = 0; i < colN; ++i)
        for (int j = 0; j < colN; ++j)
            result += macierz[i][j];

    for (int i = 0; i < colN; i++)
        delete[] macierz[i];
    delete[] macierz;

    return result;
}

int main() {
    string text;
    int key;

    cout << "Podaj tekst: ";
    getline(cin, text);
    cout << "Podaj klucz: ";
    cin >> key;

    string encrypted = encrypt(text, key);
    cout << encrypted << endl;
    cout << decrypt(encrypted, key);
    return 0;
}
