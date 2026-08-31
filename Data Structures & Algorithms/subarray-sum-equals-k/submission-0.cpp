class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        unordered_map<int, int> mp;

        // Prefix sum 0 exists before the array
        mp[0] = 1;

        int sum = 0;
        int count = 0;

        for (int x : nums) {

            sum += x;

            if (mp.count(sum - k)) {
                count += mp[sum - k];
            }

            mp[sum]++;
        }

        return count;
    }
};