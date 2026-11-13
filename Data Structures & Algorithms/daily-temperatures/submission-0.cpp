class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int>st;
        st.reserve(temperatures.size());
        vector<int>ans(temperatures.size(),0);
        for(int i=temperatures.size()-1;i>=0;i--){
            while(!st.empty()&&temperatures[st.back()]<=temperatures[i])st.pop_back();
            if(!st.empty())ans[i]=st.back()-i;
            st.push_back(i);    
        }
        return ans;
    }
};
