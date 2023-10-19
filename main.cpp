#include <iostream>
#include <vector>
using namespace std;

bool isPalindrom(const vector<int> vec) {
    for (size_t i = 0; i < vec.size(); i++)
        if (vec[i] != vec[vec.size() - 1 - i])
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
        cout << "Podaj napis nr " << i + 1 << ": ";
        cin >> temp;
        nums.push_back(temp);
    }

    if (isPalindrom(nums))
        cout << "wektor jest palindromem";
    else
        cout << "wektor nie jest palindromem";

    return 0;
}