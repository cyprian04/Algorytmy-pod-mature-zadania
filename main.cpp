#include <iostream>
#include <map>
using namespace std;

string toBigger(string &text) {
    for (size_t i = 0; i < text.length(); i++)
        if (text[i] >= 'a' && text[i] <= 'z')
            text[i] -=  32;
    return text;
}

bool isAnagram(string napis1, string napis2) {
    if (napis1.length() != napis2.length())
        return false;

    toBigger(napis1);
    toBigger(napis2);
    map<char, int> signs1;
    map<char, int> signs2;
    
    for (auto c: napis1)
        signs1[c]++;
    for (auto c : napis2)
        signs2[c]++;

    for (char sign = 'A'; sign <='Z'; sign++)
        if (signs1.find(sign) != signs1.end() && signs2.find(sign) != signs2.end() && // trzeba sprawdzić czy dany key istnieje na początku
            signs1.find(sign)->second != signs2.find(sign)->second)
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