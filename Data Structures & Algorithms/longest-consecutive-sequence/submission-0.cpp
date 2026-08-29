class Solution {
public:
    int longestConsecutive(vector<int>& a) {

        unordered_set<int> s;

        for (int x : a)
            s.insert(x);

        int ans = 0;

        for (int x : s) {

            // x is the beginning of a sequence
            if (s.count(x - 1) == 0) {

                int current = x;
                int count = 1;

                while (s.count(current + 1)) {
                    current++;
                    count++;
                }

                ans = max(ans, count);
            }
        }

        return ans;
    }
};