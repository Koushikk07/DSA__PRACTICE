#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    /*
    Returns the minimum number of jumps needed
    to reach the last index using greedy ranges.
    */
    int jump(vector<int>& nums) {
        int n = nums.size();

        // A single index is already the destination.
        if (n <= 1) {
            return 0;
        }

        // Stores how many jumps have been used so far.
        int jumps = 0;

        // Marks the end of the range covered by current jumps.
        int currentEnd = 0;

        // Stores the farthest index reachable from the current range.
        int farthest = 0;

        for (int i = 0; i < n - 1; i++) {
            // Try to extend the next reachable range from this index.
            farthest = max(farthest, i + nums[i]);

            // When the current range ends, one more jump is needed.
            if (i == currentEnd) {
                jumps++;
                currentEnd = farthest;

                // Once the last index is inside the range,
                // no more scanning is needed.
                if (currentEnd >= n - 1) {
                    break;
                }
            }
        }

        return jumps;
    }
};

// Driver code starts
int main() {
    vector<int> nums = {2, 3, 1, 1, 4};

    Solution solution;
    cout << solution.jump(nums);

    return 0;
}