class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {

        set<int> s;

        for (int x : nums) {
            if (x > 0) {
                s.insert(x);
            }
        }

        int expected = 1;

        for (int x : s) {

            if (x == expected) {
                expected++;
            }
            else if (x > expected) {
                return expected;
            }
        }

        return expected;
    }
};