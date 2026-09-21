class Solution {
public:
    vector<int> twoSum(vector<int>& a, int target) {
             int n=a.size();
            unordered_map<int,int>ggs;
            for(int i=0;i<n;i++){
                ggs[a[i]]=i;
            }
            for(int i=0;i<n;i++){
             int   ans=target-a[i];
                if(ggs.find(ans)!=ggs.end()&&ggs[ans]!=i){
                    return {i,ggs[ans]};
                }
            }
        return {};
    }
};
