//
// Created by Tabassum Akter Nusrat on 7/8/25.
//

//o(n*n) approach

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = INT_MIN;
        for(int i=0;i<nums.size(); i++) {
            int sum = 0;
            for(int j=i;j<nums.size(); j++) {
                sum += nums[j];
                maxSum = max(sum, maxSum);
            }

        }
        return maxSum;
    }
};

//o(n) approach
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = INT_MIN;
        int sum = 0;
        for(int i=0;i<nums.size(); i++) {

            sum += nums[i];
            maxSum = max(maxSum, sum);

            if(sum < 0) {
                sum = 0;
            }

        }
        return maxSum;
    }
};
