class Solution {
public:
    int maxArea(vector<int>& h) {
        int n=h.size();
        int l=0,r=n-1,maxi=-1;
        while(l<r){
            int area=0;
            if(h[l]>=h[r]){
                area=h[r]*(r-l);

                maxi=max(maxi,area);
                r--;
            }
            else 
            if(h[l]<h[r]){
                area=h[l]*(r-l);
                l++;
                 maxi=max(maxi,area);
            }
        }

        return maxi;

    }
};
