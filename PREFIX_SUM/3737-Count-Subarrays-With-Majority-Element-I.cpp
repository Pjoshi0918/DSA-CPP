#include <bits/stdc++.h>
using namespace std;

/*Time Complexity: O(n²)
Space Complexity: O(N) */


class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {

        int n = nums.size();

        vector<int> prefix(n + 1, 0);

        for (int i = 0; i < n; i++) {

            prefix[i + 1] = prefix[i];

            if (nums[i] == target)
                prefix[i + 1]++;
        }

        int ans = 0;

        for (int l = 0; l < n; l++) {

            for (int r = l; r < n; r++) {

                int len = r - l + 1;

                int targetCount = prefix[r + 1] - prefix[l];

                if (targetCount > len / 2)
                    ans++;
            }
        }

        return ans;
    }
};