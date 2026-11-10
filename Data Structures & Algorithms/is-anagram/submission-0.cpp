class Solution {
public:
    bool isAnagram(string s, string t) {
        int f[26]={0};
        int n=s.size();
        if(n!=t.size())return false;
        for(int i=0;i<n;i++){
            f[s[i]-'a']++;
            f[t[i]-'a']--;
        }
        for(int i=0;i<26;i++)if(f[i]!=0)return false;
        return true;
    }
};
