#include <iostream>
#include <vector>
using namespace std;

int numsAreDivided(vector<int> vec) {
    for (size_t i = 0; i < vec.size(); i++)
        if (vec[i] % 13 == 0)
            return false;
    return true;
}

int main() {
    int size = 0;
    vector<int> nums;
    cout << "Podaj ilosc liczb jaka chcesz wprowadzic :";
    cin >> size;

    for (size_t i = 0; i < size; i++) {
        int temp = 0;
        cout << "Podaj liczbe nr " << i + 1 << ": ";
        cin >> temp;
        nums.push_back(temp);
    }

    if (numsAreDivided(nums))
        cout << "Wszystkie liczby wektora nie sa podzielne przez 13";
    else 
        cout << "Co najmniej jedna z liczb wektora jest podzielna przez 13";

    return 0;
}