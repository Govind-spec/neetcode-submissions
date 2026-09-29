class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0,r=0,n=s.length(),maxlen=0;
        unordered_map<char,int>hash;
        
        while(r<n){
           
            if(hash.find(s[r])!=hash.end()){
                
                l = max(l,hash[s[r]]+1);

            }
          
                hash[s[r]]=r;
               
                maxlen=max(r-l+1,maxlen);
                r++;
            
        }
        return maxlen;
    }
};
