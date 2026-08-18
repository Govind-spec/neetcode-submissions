class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
              int  n=nums.size();

        vector<int>ans(2*n);
        int j=0;
        int i=0;
        while(j<2*n){
            if(i==n)
            i=0;
            ans[j]=nums[i];
            j++;
            i++;
        }
        return ans;
    }
};