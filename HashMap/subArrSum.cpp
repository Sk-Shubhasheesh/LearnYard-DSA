https://leetcode.com/problems/subarray-sum-equals-k/description/
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum = 0;
        map<int, int> m = {};
        int answer = 0;
        m[0] = 1; // beacuse if in formula {0 & 0 come then it count its 1 time so we hear alredy make it 1 and next time it will 2}
        for(int i=0; i<nums.size(); i++){
            sum += nums[i];  // 0-----i sum
            // p[j]-p[i] = (i+1......j) -->k
            // p[j]-k = p[j]
            answer += m[sum- k];
            m[sum]++;

        }
        return answer;
       

        
    }
};