class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>um;
        for(int i:nums)um[i]++;
        vector<int>f;
        for(auto &i:um)f.push_back(i.second);
        nth_element(begin(f),begin(f)+k-1,end(f),greater<int>());
        vector<int>ans;
        int kf=f[k-1];
        for(auto &i:um){
            if(i.second>=kf)ans.push_back(i.first);
        }
        return ans;
    }
};