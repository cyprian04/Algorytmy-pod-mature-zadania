#include <iostream>
using namespace std;

void toBigger(string& text) {
    for (size_t i = 0; i < text.length(); i++)
        if (text[i] >= 'a' && text[i] <= 'z')
            text[i] -= 32;
}

void bubbleSortAsc(string& napis, size_t size) {
    size_t n = size - 1;

    for (size_t i = 0; i < n; i++)
        for (size_t j = 0; j < n; j++)
            if (napis[j] > napis[j + 1])
                swap(napis[j], napis[j + 1]);
}

bool isAnagram(string napis1, string napis2) {
    if (napis1.length() != napis2.length())
        return false;

    toBigger(napis1);
    toBigger(napis2);
    bubbleSortAsc(napis1, napis1.length());
    bubbleSortAsc(napis2, napis2.length());

    for (size_t i = 0; i < napis1.length(); i++)
        if (napis1[i] != napis2[i])
            return false;

    return true;
}

int main() {
    string napis1, napis2;
    cout << "Podaj napis 1: ";
    cin >> napis1;
    cout << "Podaj napis 2: ";
    cin >> napis2;

    if (isAnagram(napis1, napis2))
        cout << "wyrazy sa anagramami";
    else
        cout << "wyrazy nie sa anagramami";
    return 0;
}