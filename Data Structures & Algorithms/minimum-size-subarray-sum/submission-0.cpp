class Solution {
public:
    int minSubArrayLen(int target, vector<int>& a) {
        
        int i = 0, sum = 0;
        int len = INT_MAX;

        for (int j = 0; j < a.size(); j++) {
            
            sum += a[j];

            while (sum >= target) {
                len = min(len, j - i + 1);
                sum -= a[i];
                i++;
            }
        }

        return len == INT_MAX ? 0 : len;
    }
};