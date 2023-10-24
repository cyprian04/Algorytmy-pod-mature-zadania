#include <iostream>
#include <vector>
using namespace std;

string splitNumToDigit(int num) {
    string result;
    string temp;
    int change = 0;

    while (num > 0) {
        change = num % 10;
        temp = result;
        result = change + 48;
        result += temp;

        num -= change;
        num /= 10;
    }
    return result;
}

bool isPalindrom(const vector<int> vec) {
    string filteredVec;

    for (size_t i = 0; i < vec.size(); i++)
        if (vec[i] <= 9)
            filteredVec += vec[i] + 48;
        else
            filteredVec += splitNumToDigit(vec[i]);

    for (size_t i = 0; i < filteredVec.size(); i++)
        if(filteredVec[i] != filteredVec[filteredVec.size() - 1 - i])
            return false;
    return true;
}

int main() {
    int size = 0;
    vector<int> nums;
    cout << "Podaj ile liczb chcesz wprowadzic :";
    cin >> size;

    if (size == 0) return 0;

    for (size_t i = 0; i < size; i++) {
        int temp = 0;
        cout << "Podaj liczbe nr " << i + 1 << ": ";
        cin >> temp;
        nums.push_back(temp);
    }

    if (isPalindrom(nums))
        cout << "wektor jest palindromem";
    else
        cout << "wektor nie jest palindromem";

    return 0;
}