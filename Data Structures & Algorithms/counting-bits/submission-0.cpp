class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans(n+1);
        for(int i=0;i<=n;i++){
            int c=0;
            for(int k=0;k<=16;k++)c+=((i&(1<<k))>0);
            ans[i]=c;
        }
        return ans;
    }
};
