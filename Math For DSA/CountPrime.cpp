// Leetcode Question Link = https://leetcode.com/problems/count-primes/

// The given question is based on Prime Seive concept
class Solution {
public:
    int countPrimes(int n) {
        vector<bool> prime(n, true);
        for(int i=2; i<n; i++){
            if(prime[i]){
                int j =2;
                while(i*j < n){
                    prime[i*j] = false;
                    j++;
                }
            }
        }
        int count = 0;
        for(int i=2; i<n; i++){
            if(prime[i]) {
                count++;
            }
        }
        return count;
    }
};