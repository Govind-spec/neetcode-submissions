class Solution {
public:
    bool isAnagram(string s, string t) {
         int n=s.size();
         int m=t.size();
        unordered_map <int,int> ans1,ans2;
        if (n != m)
            return false;
        for(int i=0;i<n;i++){
            ans1[s[i]]++;
            ans2[t[i]]++;
        }
        for (auto& pair : ans1) {
            if (pair.second != ans2[pair.first])
                return false;
        }
        return true;
    }
};
