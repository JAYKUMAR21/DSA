#include <iostream>
#include <vector>
using namespace std;

int firstIndex(vector<int> &nums, int target) {
    int s = 0;
    int e = nums.size() - 1;
    int ans = -1;

    while (s <= e) {
        int mid = s + (e - s) / 2;

        if (nums[mid] == target) {
            ans = mid;
            e = mid - 1;
        } else if (nums[mid] > target) {
            e = mid - 1;
        } else {
            s = mid + 1;
        }
    }

    return ans;
}
int lastIndex(vector<int> &nums, int target) {
    int s = 0;
    int e = nums.size() - 1;
    int ans = -1;

    while (s <= e) {
        int mid = s + (e - s) / 2;

        if (nums[mid] == target) {
            ans = mid;
            s = mid + 1;
        } else if (nums[mid] > target) {
            e = mid - 1;
        } else {
            s = mid + 1;
        }
    }

    return ans;
}
vector<int> searchRange(vector<int> &nums, int target) {
    vector<int> v(2);

    v[0] = firstIndex(nums, target);
    v[1] = lastIndex(nums, target);

    return v;
}

int main() { return 0; }