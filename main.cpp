#include <iostream>
#include <vector>
using namespace std;

float arithmeticAverage(vector<float> vec) {
    float result = 0.0f;
    for (size_t i = 0; i < vec.size(); i++)
        result += vec[i];

    return result/vec.size();
}

int main() {
    int size = 0;
    vector<float> nums;
    cout << "Podaj ilosc liczb jaka chcesz wprowadzic :";
    cin >> size;

    if (size == 0) {
        cout << " Srednia arytmetyczna tego wektora wynosi 0";
        return 0;
    }   

    for (size_t i = 0; i < size; i++) {
        float temp = 0;
        cout << "Podaj liczbe nr " << i + 1 << ": ";
        cin >> temp;
        nums.push_back(temp);
    }

    cout << "Srednia arytmetyczna tego wektora wynosi: " << arithmeticAverage(nums);
    return 0;
}