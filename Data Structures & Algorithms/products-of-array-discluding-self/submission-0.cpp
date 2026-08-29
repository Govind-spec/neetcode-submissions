class Solution {
public:
    vector<int> productExceptSelf(vector<int>& a) {
        int n=a.size();
        vector <int>ans;
        int left[n],right[n];

        left[0]=1;
        right[n-1]=1;

        for(int i=1;i<n;i++){
            left[i]=a[i-1]*left[i-1];

        }
        for(int i=n-2;i>=0;i--){
            right[i]=a[i+1]*right[i+1];

        }
        for(int i=0;i<n;i++){
          int  an=left[i]*right[i];
            ans.push_back(an);

        }
        return ans;
    }
};
