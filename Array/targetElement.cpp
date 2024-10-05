// Question - Find two indexes in array whose sum is equal to target element
// array is sorted
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>result = {};
        result.push_back(-1);
        result.push_back(-1);
        int n = numbers.size();
        int i=0;
        int j=n-1;
        while(i<=j){
            int currentSum = numbers[i] + numbers[j];
            if(currentSum==target){
                result[0]= i+1;
                result[1]= j+1;
                break;
            }
            else if(currentSum>target) j--;
            else i++
        }


        return result;
    }
};