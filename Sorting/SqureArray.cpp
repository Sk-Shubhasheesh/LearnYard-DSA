// leetdcode 977 Problem - https://leetcode.com/problems/squares-of-a-sorted-array/description/https://leetcode.com/problems/squares-of-a-sorted-array/description/


class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n =  nums.size();
        vector<int>ans(n, 0);
        int i = 0; 
        int j = n-1;
        int index = n-1;
        while(i<=j){
            if(abs(nums[i])>abs(nums[j])){
                ans[index] = nums[i]*nums[i];
                i++;
            } else{
               ans[index] = nums[j]*nums[j];
               j-- ;
            }
            index--;
        }
        return ans;
        
    }
};