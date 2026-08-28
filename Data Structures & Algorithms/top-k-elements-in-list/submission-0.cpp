class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int,int>freq;
        for(auto it: nums){
            freq[it]++;
        }
        vector<vector<int>>bucket(nums.size()+1);
        for(auto [num,f]:freq){
            bucket[f].push_back(num);
        }
        vector<int>ans;
        for(int i=bucket.size()-1;i>=0 && ans.size()<k;i--){
            for(auto n:bucket[i]){
                ans.push_back(n);
                if(ans.size()==k)
                break;
            }
        }
        return ans;
    }
};
