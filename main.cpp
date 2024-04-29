#include <iostream>
using namespace std;

void encryption(string& text, int key) {
    key %= 26;
    for (int i = 0; i < text.length(); i++){
        if (text[i] + key <= 'Z') 
            text[i] += key;
        else 
            text[i] += key - 26;
    }
}

void decryption(string& text, int key) {
    key %= 26;
    for (int i = 0; i < text.length(); i++) {
        if (text[i] - key >= 'A')
            text[i] -= key;
        else
            text[i] += -key + 26;
    }
}


int main() {
    string text;
    int key = 0;

    cout << "Enter text: ";
    cin >> text;
    cout << "Enter key: ";
    cin >> key;

    encryption(text, key);
    cout << "Encrypted to: " << text << endl;
    decryption(text, key);
    cout << "Decrypted to: " << text;

    return 0;
 }