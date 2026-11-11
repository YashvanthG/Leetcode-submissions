class Solution {
public:
    string hash(string &s){
        string f(26,0);
        for(char ch:s)f[ch-'a']++;
        return f;
    }
    bool cmp(vector<int>&a,vector<int>&b){
        for(int i=0;i<26;i++)if(a[i]!=b[i])return false;
        return true;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>um;
        vector<vector<string>>ans;
        ans.reserve(strs.size());
        for(string &s:strs){
            um[hash(s)].push_back(s);
        }
        for(auto &[s,v]:um)ans.push_back(v);
        return ans;
    }
};

