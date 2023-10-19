#include <iostream>
#include <vector>
using namespace std;

int sum(vector<int> vec, int size) {
    if (size == 0)
        return vec[0];
    return vec[size] + sum(vec, size - 1);
}

int main() {
    vector<int> nums = { 1,2,3,4 };

    cout << "mamy wektor\n";
    for (const auto n : nums)
        cout << n << ", ";

    cout << "Suma elementow wektora wynosi: " << sum(nums, nums.size() - 1);
    return 0;
}