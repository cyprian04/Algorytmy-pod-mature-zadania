#include <iostream>
#include <cmath>
using namespace std;

void bubbleSortDesc(string &text, size_t size) {
    for (size_t i = 0; i < size - 1; i++)
        for (size_t j = 0; j < size - 1; j++)
            if (text[j] < text[j + 1])
                swap(text[j], text[j + 1]);
}

void toUpper(string &text) {
    for (size_t i = 0; i < text.length(); i++)
        if (text[i] >= 'a' && text[i] <= 'z')
            text[i] -= 32;
}

bool areAnagrams(const string text1, const string text2){
    if (text1.length() != text2.length())
        return false;

    string t1 = text1;
    string t2 = text2;
    toUpper(t1);
    toUpper(t2);
    bubbleSortDesc(t1, t1.length());
    bubbleSortDesc(t2, t2.length());

    return t1 == t2;
}

int main() {
    string text1, text2;
    cout << "enter text1: ";
    cin >> text1;
    cout << "enter text2: ";
    cin >> text2;
    
    if (areAnagrams(text1, text2))
        cout << "They are anagrams";
    else
        cout << "They are not anagrams";
    return 0;
 }