// Moves Zeroes
// move all 0's to the end of it. Without making copy of the array
// Problem link - https://leetcode.com/problems/move-zeroes/description/



// If question allowed to the we can create a copy then solution
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int arr[n];
        for(int i=0; i<n; i++){
            arr[i] = 0;
        }
        int j = 0;
        for(int i=0; i<n; i++){
            if(nums[i]!=0){
                arr[j] = nums[i];
                j++;
            }
        }
        for(int i=0; i<n; i++){
            nums[i] = arr[i];
        }
    }
};


// According to question
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int frnd = 0;
        for(int me =0; me<n; me++){
            if(nums[me]!=0){
                swap(nums[me], nums[frnd]);
                frnd++;
            }
        }
    }
};