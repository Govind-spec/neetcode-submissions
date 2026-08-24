class Solution {
public:

    int partition(vector<int>& a, int first, int last) {

        int pivot = a[first];

        int i = first + 1;
        int j = last;

        while (i <= j) {

            while (i <= last && a[i] <= pivot)
                i++;

            while (j >= first && a[j] > pivot)
                j--;

            if (i < j)
                swap(a[i], a[j]);
        }

        swap(a[first], a[j]);

        return j;
    }

    void quickSort(vector<int>& a, int first, int last) {

        if (first >= last)
            return;

        int part = partition(a, first, last);

        quickSort(a, first, part - 1);
        quickSort(a, part + 1, last);
    }

    vector<int> sortArray(vector<int>& nums) {

        quickSort(nums, 0, nums.size() - 1);

        return nums;
    }
};