#include <iostream>
using namespace std;

void encryptionFence(string& text, int key) {
    int rows = key;
    const int columns = int(text.length());
    char** tab = new char* [rows];
    for (int i = 0; i < rows; i++)
        tab[i] = new char[columns];

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < columns; j++)
            tab[i][j] = '*';

    bool goingDown = true;
    int index = 0;
    for (int i = 0; index != text.length();) {
        for (int j = 0; j < columns;j++) {
            tab[i][j] = text[index++];

            if (goingDown && i != rows - 1) i++;
            else if (goingDown && i == rows - 1) {
                goingDown = false;
                i--;
            }
            else if (!goingDown && i != 0) i--;
            else if (!goingDown && i == 0) {
                goingDown = true;
                i++;
            }
        }
    }
    index = 0;
    for (int i = 0; i < rows; i++) { 
        for (int j = 0; j < columns; j++) {
            cout << tab[i][j] << " ";
            if (tab[i][j] != '*')
                text[index++] = tab[i][j];
        }            
        cout << endl; 
    }

    for (int i = 0; i < rows; i++)
           delete[] tab[i];
    delete[] tab;
}

int main() {
    int key = 2;
    string text;
    cout << "Enter text: ";
    cin >> text;
    cout << "Enter key: ";
    cin >> key;

    encryptionFence(text, key);
    cout << "Encrypted to: " << text << endl;
    //decryption(text);
    //cout << "Decrypted to: " << text;

    return 0;
 }