#include <iostream>
#include <vector>
using namespace std;

int sumOfEvenNums(vector<int> vec) {
    int sum = 0;

    for (size_t i = 0; i < vec.size(); i++)
        if (vec[i] % 2 == 0)
            sum += vec[i];
    return sum;
}

int main() {
    int num = 0;
    vector<int> nums = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    cout << "Wektor posiada liczby: ";
    for (const auto &n : nums)
        cout << n <<" ";

    cout << "\nSuma liczb parzystych tego wektora: "<< sumOfEvenNums(nums);

    return 0;
}