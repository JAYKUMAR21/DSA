#include <algorithm>
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maximumGap(vector<int> &nums) {
    if (nums.size() < 2) {
        return 0;
    }
    sort(nums.begin(), nums.end());

    int maxi = INT_MIN;

    for (int i = 1; i < nums.size(); i++) {
        maxi = max(maxi, nums[i] - nums[i - 1]);
    }

    return maxi;
}