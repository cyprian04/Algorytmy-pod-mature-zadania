#include <iostream>
#include <cmath>
using namespace std;

int charToDigit(char sign) {
    int num = 0;
    if (sign <= '9')
        return num = int(sign - 48);
    else 
        return num = int(sign - 55);
}

int convertAnyToDec(string num, int system) {
    int result = 0;
    for (int i = 0; i < num.size(); i++)
        result += charToDigit(num[num.size() -1 -i]) * int(pow(system,i));
    return result;
}

int main() { 
    cout << convertAnyToDec("101010101010", 2);
    return 0;
 }