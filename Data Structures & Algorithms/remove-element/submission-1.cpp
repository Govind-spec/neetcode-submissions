class Solution {
public:
    int removeElement(vector<int>& a, int val) {
        int n = a.size();

        if (n == 0)
            return 0;

        int i = 0, j = n - 1;

        while (i <= j) {

            if (a[i] == val) {
                swap(a[i], a[j]);
                j--;
            }
            else {
                i++;
            }
        }

        return i;
    }
};