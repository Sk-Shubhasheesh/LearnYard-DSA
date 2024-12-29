https://leetcode.com/problems/group-anagrams/description/

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> answer = {};
        map<string, vector<string>>m = {};
        for(int i =0; i<strs.size(); i++){
            string copy = strs[i];
            sort(copy.begin(), copy.end());
            m[copy].push_back(strs[i]);
        }
        for(auto x : m){
            vector<string>group={};
            for(auto element: x.second){
                group.push_back(element);

            }
            answer.push_back(group);
        }
        return answer;
    }
};