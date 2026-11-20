class Solution {
public:
    bool isPalindrome(string s) {
        int l=0,r=s.size()-1;
        while(l<r){
            while(l<r && !isalnum(s[l]))l++;
            while(l<r && !isalnum(s[r]))r--;
            if(tolower(s[l])!=tolower(s[r])){
                cout<<s[l]<<" "<<s[r];
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};
        // for(int i=0;i<s.size();i++)if(s[i]!=s[s.size()-i-1])return false;
