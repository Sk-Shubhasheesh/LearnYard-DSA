// Leetdcode - https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/description/
class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int start = 0;
        int end = n-1;
        while(start<=end){
            int mid = (start+end)/2;
            // condition for return minimum element
            if(nums[(mid-1+n)%n]>nums[mid] && nums[mid]<nums[(mid+1)%n]) return nums[mid];
            // If both part is sorted
            else if(nums[start]<=nums[mid] && nums[mid]<=nums[end]) return nums[start];
            // If Left Part is Sorted
            else if(nums[start]<=nums[mid]) start = mid+1;
            // If Right Part is Sorted
            else end = mid-1;
        }
        return nums[0];
    }
};