//
// Created by Tabassum Akter Nusrat on 7/8/25.
//  bruite force
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int a=0, b= 0, c=0;
        for(int i=0;i<nums.size(); i++) {
            if(nums[i] ==0) {
                a++;
            }
            if(nums[i] == 1) {
                b++;
            }
            if(nums[i] == 2) {
                c++;
            }
        }

        for(int i=0;i<nums.size(); i++) {
            if(a> 0) {
                nums[i] = 0;
                a--;
            } else if( b>0){
                nums[i] = 1;
                b--;
            } else if(c>0) {
                nums[i] = 2;
                c--;
            }
        }
    }
};

//optimal approach
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int start = 0;
        int mid = 0;
        int end = nums.size() - 1;

        while(mid<= end) {
            if(nums[mid] == 0) {
                swap(nums[start++], nums[mid++]);
            } else if(nums[mid] == 1) {
                mid++;
            } else{
                swap(nums[mid], nums[end]);
                end--;
            }
        }

    }
};