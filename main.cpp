#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> filteredVec(vector<int> &vec) {
    vector<int> nums;
    int maxNum = *max_element(vec.begin(), vec.end());
    int minNum = *min_element(vec.begin(), vec.end());
    int treshold = (maxNum + minNum) / 2;

    for (size_t i = 0; i < vec.size(); i++)
        if (vec[i] >= treshold)
            nums.push_back(vec[i]); 

    return nums;
}

int main() {
    vector<int> nums = { 1,2,3,4,5,6,7,8,9 };

    cout << "mamy wektor\n";
    for (const auto n : nums)
         cout << n << ", ";

    vector<int>filtered = filteredVec(nums);

    cout << "\nZaktualizowany wektor: \n";
    for (const auto n : filtered)
        cout << n << ", ";
    return 0;
}