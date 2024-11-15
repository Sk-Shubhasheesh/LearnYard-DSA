// 179 LeedCode =  https://leetcode.com/problems/largest-number/submissions/1453192761/

bool compare(int a, int b){
    return to_string(a)+to_string(b)>to_string(b)+to_string(a);
}
class Solution {
public:
    string largestNumber(vector<int>& nums) {
        string ans = "";
        sort(nums.begin(), nums.end(), compare);

        for(auto i: nums){
            ans+= to_string(i);
        }
        if(ans[0] == '0') return "0";
        return ans;
    }
};

/*
Step-by-Step Dry Run:
Step 1: Sorting with Custom Comparator
The custom comparator compare(int a, int b) is used during the sorting phase. The comparator works as follows:
Convert both a and b to strings.
Compare the concatenated strings to_string(a) + to_string(b) and to_string(b) + to_string(a).
If the former is greater, a should come before b in the sorted order.
Let's compare all pairs and sort nums:

Compare 3 and 30:

to_string(3) + to_string(30) = "330"
to_string(30) + to_string(3) = "303"
"330" > "303", so 3 comes before 30.
Compare 30 and 34:

to_string(30) + to_string(34) = "3034"
to_string(34) + to_string(30) = "3430"
"3430" > "3034", so 34 comes before 30.
Compare 3 and 34:

to_string(3) + to_string(34) = "334"
to_string(34) + to_string(3) = "343"
"343" > "334", so 34 comes before 3.
Compare 34 and 5:

to_string(34) + to_string(5) = "345"
to_string(5) + to_string(34) = "534"
"534" > "345", so 5 comes before 34.
Compare 5 and 9:

to_string(5) + to_string(9) = "59"
to_string(9) + to_string(5) = "95"
"95" > "59", so 9 comes before 5.
Final sorted order: nums = [9, 5, 34, 3, 30].

Step 2: Concatenate the Numbers
Initialize ans = "".
Iterate through the sorted array and append each number's string representation to ans:
After 9: ans = "9"
After 5: ans = "95"
After 34: ans = "9534"
After 3: ans = "95343"
After 30: ans = "9534330"
Step 3: Handle Leading Zeros
Check if the first character of ans is '0' (i.e., the result is "000..."):
In this case, it's not true since ans[0] = '9'.
Return ans as it is.

*/