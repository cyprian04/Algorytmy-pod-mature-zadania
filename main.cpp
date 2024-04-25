#include <iostream>
using namespace std;

int charToDigit(char sign) {
    if (sign <= '9')
        return int(sign - 48);
    else 
        return int(sign - 55);
}

int convertAnyToDec(string num, int system) {
    int result = 0;
    for (int i = 0; i < num.size(); i++)
        result += charToDigit(num[num.size() -1 -i]) * int(pow(system,i));
    return result;
}

char digitToChar(int num) {
    if (num <= 9)
        return char(num + 48);
    else
        return char(num + 55);
}

string convertDecToAny(int num, int system) {
    string result;
    while (num > 0) {
        result += digitToChar(num % system);
        num /= system;
    }
    return  {result.rbegin(), result.rend()};
}


int main() { 
    cout << convertAnyToDec("101010101010", 2) << endl;
    cout << convertDecToAny(3214, 16);

    return 0;
 }