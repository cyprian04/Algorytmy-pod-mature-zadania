#include <iostream>
using namespace std;

bool isPatternNested(string napis, string wzor) {
    int counter = 0;

    for (size_t i = 0; i < napis.length(); i++){
        if (napis[i] == wzor[counter])
            counter++;
        else {
            i -= counter;
            counter = 0;
        }
        if (counter == wzor.length())
            return true;
    }
    return false;
}

int main() {
    if (isPatternNested("AdaaadmAdddAdam", "Adam"))
        cout << "ciag Adam zawiera sie w napisie AdaaadmAdddAdam";
    else 
        cout << "ciag Adam Nie zawiera sie w napisie AdaaadmAdddAdam";
    return 0;
}