#include <vector>
#include <algorithm>
#include <iostream>

class Solution {
public:
    int lengthOfLIS(std::vector<int>& nums) {
        // Dynamic Programming: We can solve this problem by solving a smaller subproblem

        // We can consider a window of the array and iterate from the end of the array til the beginning, where the each element in the array represents the longest increasing subsequence starting from that element

        // Then to expand our window to the next element, we consider all the elements in the window and try to determine what would be the longest possible sequence 

        // O(n^2)

        // Iterate from the end of the array to the beginning of the array and keep expanding our window
        // Each element in the window will represent the LIS from that element if we include it

        // To expand the window, we consider whether the new element is less than the element in at a particular index in the window. If it is then we increment that 1, and we keep doing this for all of them and get the max value, which will be stored the new element in the window. 

        int LIS = 1;
        std::vector<int> dp (nums.size(), 0);
        int max_current_lis = 0;

        for (int i = nums.size()-1; i >= 0; --i) {

            max_current_lis = 1;

            for (int j = i+1; j < dp.size(); ++j) {
                if (nums[i] < nums[j]) {
                    max_current_lis = std::max(max_current_lis, dp[j]+1);
                }
            }

            dp[i] = max_current_lis;
            LIS = std::max(LIS, max_current_lis);
        }

        return LIS;
    }
};

int main(void) {
    Solution solution = Solution();
    std::vector nums = {1, 2, 3, 4, 5};
    int res = solution.lengthOfLIS(nums);
    
    std::cout << res << std::endl;

}