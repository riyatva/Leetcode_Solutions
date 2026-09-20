class Solution {
public:

     bool isValid(vector<int>&bloomDay ,int m , int k,int mid){

     int n = bloomDay.size();
     int bouq = 0;
     int cnt = 0;
     for(int i=0;i<n;i++){

        if(bloomDay[i] <= mid){
            // Bloomed :
            cnt++;
            if(cnt==k){
                bouq++;
                cnt = 0;
            }
        }
        else{
            cnt = 0;
        }
     }
     if(bouq >= m){
        return true;
     }

       return false ;
     }
    int minDays(vector<int>& bloomDay, int m, int k) {
        
        int n = bloomDay.size();
        int low = 1;
        int high = 1e9;
        
        int ans = -1;

        while(low<=high){
            int mid = low+(high-low)/2;
            if(isValid(bloomDay,m,k,mid)){
                ans = mid ;
                high = mid-1 ;
            }
            else{
                low = mid+1;
            }
        }

return ans;


    }
};