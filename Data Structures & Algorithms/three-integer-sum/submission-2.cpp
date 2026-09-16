class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& a) {
        vector<vector<int>> mans;

        sort(a.begin(), a.end());

        int n = a.size();
        int i = 0;

        while (i < n - 2) {

            // Skip duplicate i
            if (i > 0 && a[i] == a[i - 1]) {
                i++;
                continue;
            }

            int j = n - 1;

            while (i < j - 1) {

                int target = -(a[i] + a[j]);

                for (int k = i + 1; k < j; k++) {

                    if (a[k] == target) {
                        mans.push_back({a[i], a[k], a[j]});
                        break;
                    }
                }

                // Skip duplicate j
                while (j > i + 1 && a[j] == a[j - 1])
                    j--;

                j--;
            }

            i++;
        }

        return mans;
    }
};