#include <iostream>
#include <map>
using namespace std;

string toUpper(string text) {
    string result;
    for (size_t i = 0; i < text.length(); i++) {
        if (text[i] >= 'a' && text[i] <= 'z')
            result += (text[i] - 32);
        else
            result += text[i];
    }
    return result;
}

bool areTheyAnagrams(const string t1, const string t2) {
    if (t1.length() != t2.length()) return false;

    string temp1 = toUpper(t1);
    string temp2 = toUpper(t2);
    map<char, int> signs1;
    map<char, int> signs2;

    for (const auto& n : temp1)
        signs1[n]++;
    for (const auto& n : temp2)
        signs2[n]++;

    for (char sign = 'A'; sign < 'Z'; sign++)
        if (signs1.find(sign) != signs1.end() && signs2.find(sign) != signs2.end() && signs1.find(sign)->second != signs2.find(sign)->second)
            return false;
    return true;
}

int main() { 
    string text1, text2;
    cout << "Podaj napis1: ";
    cin >> text1;
    cout << "\nPodaj napis2: ";
    cin >> text2;

    if (areTheyAnagrams(text1, text2))
        cout << "They are anagrams";
    else
        cout <<"They are not anagrams";
    return 0;
 }