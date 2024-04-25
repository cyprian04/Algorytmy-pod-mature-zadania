#include <iostream>
#include <map>
using namespace std;

bool isPatternNested(const string text, const string pattern) {
    int pos = 0;
    for (size_t i = 0; i < text.length(); i++) {
        if (text[i] == pattern[pos])
            pos++;
        else {
            i -= pos;
            pos = 0;
        }
    }
    return pos == pattern.length();
}

int main() { 
    if (isPatternNested("CypriarianasnCypgjsandasjdnCypu", "Cypu"))
        cout << "pattern is nested inside text";
    else
        cout << "pattern is not nested";

    return 0;
 }