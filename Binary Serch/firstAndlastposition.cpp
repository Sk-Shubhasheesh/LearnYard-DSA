// leetcode question - https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size()-1;
        int first= -1, last=-1;
        vector<int>ans(2);
        // first position
        while(start<=end){
            int mid = start+(end-start)/2;
            if(nums[mid]==target){
                first =mid;
                end = mid-1;
            } else if(nums[mid]>target){
                end = mid-1;
            } else{
                start = mid+1;
            }
        }
         // Reset start and end for finding the last position
        start = 0;
        end = nums.size() - 1;
        // last possition
         while(start<=end){
            int mid = start+(end-start)/2;
            if(nums[mid]==target){
                last =mid;
                start = mid+1;
            } else if(nums[mid]>target){
                end = mid-1;
            } else{
                start = mid+1;
            }
        }
        ans[0] = first;
        ans[1] = last;
        return ans;
    }
};