class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int c=0;
        unordered_set<int>us(nums.begin(),nums.end());
        for(int i:nums){
            if(us.count(i-1))continue;
            int d=i+1;
            while(us.count(d))d++;
            c=max(c,d-i);
        }
        return c;
    }
};
