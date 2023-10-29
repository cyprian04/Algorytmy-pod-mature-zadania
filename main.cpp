#include <iostream>
using namespace std;

string toBigger(string &text) {
    for (size_t i = 0; i < text.length(); i++)
        if (text[i] >= 'a' && text[i] <= 'z')
            text[i] -=  32;
    return text;
}

int numOfSign(string napis, char sign) {
    int total = 0;
    for (size_t i = 0; i < napis.length(); i++)
        if (napis[i] == sign) 
            total++;

    return total;
}

bool isAnagram(string napis1, string napis2) {
    if (napis1.length() != napis2.length())
        return false;

    toBigger(napis1);
    toBigger(napis2);

    for (char sign = 'A'; sign <='Z'; sign++)
        if (numOfSign(napis1, sign) != numOfSign(napis2, sign))
            return false;
    return true;
}

int main() {
    string text1, text2;
    cout << "Podaj 1 wyraz: ";
    cin >> text1;
    cout << "Podaj 2 wyraz: ";
    cin >> text2;
    
    if (isAnagram(text1, text2))
        cout << "napisy sa anagramami";
    else 
        cout << "napisy nie sa anagramami";
    return 0;
}