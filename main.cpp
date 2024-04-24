#include <iostream>
#include <vector>
using namespace std;

int recursiveSum(vector<int>nums, int position){
    if (position == 0)
        return nums[0];

    return nums[position] + recursiveSum(nums, position - 1);
}

int main() { 
    vector<int>nums = { 1,2,17,4 };
    cout << recursiveSum(nums, int(nums.size()-1));
    return 0;
 }