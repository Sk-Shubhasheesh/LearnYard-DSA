// leedcode question - https://leetcode.com/problems/sqrtx/

class Solution {
public:
    int mySqrt(int x) {
        long long int start = 1;
        long long int end = x;
        int ans = 0;
        while(start<=end){
            long long int mid = (start+end)/2;
            if(mid*mid <= x){
                ans = mid;
                start = mid+1;
            } else{
                end = mid -1;
            }
        }
        return ans;

    }
};