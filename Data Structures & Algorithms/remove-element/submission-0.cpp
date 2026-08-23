class Solution {
public:
    int removeElement(vector<int>& a, int k) {
        int i=0;
        int n=a.size();
        while(i<n){
              if(a[i]==k)  {
                for(int j=i;j<n-1;j++){
                    a[j]=a[j+1];
                }
                n--;
              }
              else 
              i++;



        }
        return n;
    }
};