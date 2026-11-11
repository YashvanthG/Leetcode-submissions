class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int zc=0;
        bool z=false;
        long long tpro=1;
        for(int i:nums){
            if(i==0){
                z=true;
                zc++;
            }
            tpro*=i;
        }
        vector<int>ans(nums.size(),0);
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                if(zc>1)ans[i]=0;
                else{
                    int p=1;
                    for(int j=0;j<nums.size();j++){
                        if(j==i)continue;
                        p*=nums[j];
                    }
                    ans[i]=p;
                }
            }
            else if(z)ans[i]=0;
            else{
                ans[i]=tpro/nums[i];
            }
        }
        return ans;
    }
};
