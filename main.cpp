#include <iostream>
using namespace std;

void encryptionAndDecryption(string& text) {
    for (size_t i = 0; i < text.length() - 1; i += 2)
        swap(text[i], text[i + 1]);
}

int main() {
    string text;
    cout << "Enter text: ";
    cin >> text;

    encryptionAndDecryption(text);
    cout << "Encrypted to: " << text << endl;
    encryptionAndDecryption(text);
    cout << "Decrypted to: " << text;

    return 0;
 }