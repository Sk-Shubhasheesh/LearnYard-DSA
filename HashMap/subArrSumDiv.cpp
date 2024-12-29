https://leetcode.com/problems/subarray-sums-divisible-by-k/description/

class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        map<int ,int> m = {};
        int answer = 0;
        int prefix_sum = 0;
        m[0] = 1;
        for(int i=0; i<nums.size(); i++){
            prefix_sum += nums[i];
            prefix_sum %= k;
            // negative
            if(prefix_sum<0){
                prefix_sum += k;   // -3%5 = (-3+5)2%5
            }
            answer += m[(prefix_sum%k)];
            m[prefix_sum]++;
        }
        return answer;
        
    }
};