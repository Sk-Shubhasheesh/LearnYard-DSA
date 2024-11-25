// GFG Link - https://www.geeksforgeeks.org/problems/the-painters-partition-problem1535/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card


class Solution {
  public:
    bool isPossible(long long mid, vector<int> &arr, int k, int n){
        int count = 1;
        long long int time  = 0;
        for(int i=0; i<arr.size(); i++){
            if(time+arr[i]>mid){
                count++;
                time = arr[i];
            } else{
                time += arr[i];
            }
        }
        return(count<=k);
    }
    long long minTime(vector<int>& arr, int k) {
        // STEP 1 - Range
        // K = 1(SUM)
        // K = N(maximum of the array)
        int n = arr.size();
        long long sum = 0;
        long long maxValue = 0;

        for(int i=0; i<n; i++){
            sum += arr[i];
            maxValue = max(maxValue, (long long)arr[i]);
        }
        long long start = maxValue;
        long long end = sum;
        long long answer = end;

        while(start<=end){
            long long int mid = (start+end)/2;
            if(isPossible(mid, arr, k, n)==true){
                answer = mid;
                end = mid-1;
            }else{
                start = mid+1;
            }
        }
        return answer;


    }
};