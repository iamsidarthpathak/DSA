#include <bits/stdc++.h>
using namespace std;

// Lower Bound: First index having value >= target
int lowerBound(vector<int> &nums, int target) {
    int n = nums.size();
    int low = 0, high = n - 1;
    int ans = n;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (nums[mid] >= target) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return ans;
}

// Upper Bound: First index having value > target
int upperBound(vector<int> &nums, int target) {
    int n = nums.size();
    int low = 0, high = n - 1;
    int ans = n;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (nums[mid] > target) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return ans;
}

// Returns first and last occurrence of target
pair<int, int> searchRange(vector<int> &nums, int target) {

    int firstOccurrence = lowerBound(nums, target);

    // Target not present
    if (firstOccurrence == nums.size() || nums[firstOccurrence] != target) {
        return {-1, -1};
    }

    int lastOccurrence = upperBound(nums, target) - 1;

    return {firstOccurrence, lastOccurrence};
}

int main() {

    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int target;
    cin >> target;

    pair<int, int> ans = searchRange(nums, target);

    cout << "First Occurrence : " << ans.first << endl;
    cout << "Last Occurrence  : " << ans.second << endl;

    return 0;
}//better approach is on lc (acc gto me )