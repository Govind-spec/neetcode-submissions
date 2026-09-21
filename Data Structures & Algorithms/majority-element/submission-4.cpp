class Solution {
public:
    int majorityElement(vector<int>& a) {
                int nu= a.size();

                unordered_map<int,int>mp;
                for(auto it : a){
                    mp[it]++;
                }
                for(auto it : a){
                    if(mp[it]>nu/2){
                        return it;
                    }
                }

    }
};