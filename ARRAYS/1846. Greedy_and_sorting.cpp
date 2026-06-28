#include <bits/stdc++.h>
using namespace std;

/*Time Complexity: O(nlogn)  also greedy approch
Space Complexity: O(1) */


class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {

        int n = arr.size();

        sort(arr.begin(),arr.end());

        arr[0] = 1;

        for(int i = 1;i<n;i++){

            arr[i] = min(arr[i],1 + arr[i-1]);

        }

        return arr.back();
     

    }
};
