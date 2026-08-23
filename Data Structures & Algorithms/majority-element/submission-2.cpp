class Solution {
public:
    int majorityElement(vector<int>& a) {
        int nu= a.size();
       int i=1,n=1;
        int k=a[0];
        
        while(i<nu){
             if(n==0){
                k=a[i];
            }

            if(k!=a[i]){
                n--;
            }
            else{
            n++;
            }
            i++;
           


        }
        return k;
    }
};