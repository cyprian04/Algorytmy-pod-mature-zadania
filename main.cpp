#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

bool areSameLength(vector<string> strings) {
   return strings[0].length() == strings[1].length() && strings[1].length() == strings[2].length() && 
          strings[2].length() == strings[3].length() && strings[3].length() == strings[4].length();
}

int main() {
    fstream file;
    ofstream saveFile;
    file.open("anagram.txt");
    saveFile.open("odp_4a.txt");

    saveFile << "a)\n";

    while (!file.eof()) {
        vector<string> strings(5);
        for (int i = 0; i < 5; i++)
            file >> strings[i];

        if (areSameLength(strings)) {
            for (int i = 0; i < 5; i++)
                saveFile << strings[i] << " ";
            saveFile << endl;
        }
    }
    file.close();
    saveFile.close();
    return 0;
}