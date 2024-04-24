#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> filteredSum(vector<int> vec) {
    vector<int> resultVec;

    int maxVal = *max_element(vec.begin(), vec.end());
    int minVal = *min_element(vec.begin(), vec.end());
    int threshold = (maxVal + minVal) / 2;

    for (int i = 0; i < vec.size(); i++) {
        if (vec[i] < threshold)
            resultVec.emplace_back(vec[i]);
    }

    return resultVec;
}

int main() { 
    vector<int>nums = { 1,2,3,4,5,6,7,8,9};
    vector<int>filtered =  filteredSum(nums);

    for (const auto& n : filtered)
        cout << n << " ";

    return 0;
 }