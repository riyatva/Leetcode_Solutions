class Solution {
public:
   bool isValid(vector<int>& bloomDay , int mid , int k , int m ){
             
      int n = bloomDay.size();
          
        //cnt means kitne flowers aa sakte hain .
        int cnt = 0;
        int bouq = 0;
        
        for(int j=0;j<n;j++){
            // means flower bloom kar gaya . usko count mein add kar lo.
            if(bloomDay[j] <= mid){
                cnt++;
                if(cnt == k){
                    bouq++;
                    cnt = 0;
                }
            }
            else{
                // cnt ko break karna padegaa kyunki flower bloom nhi kara hai .
                cnt = 0;
            } 
        }

       if(bouq >= m){
           return true;
       }
       cout<< mid << " " <<bouq <<endl;
       
       return false;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
         
         int n = bloomDay.size();
         vector<int>copy = bloomDay ;

         sort( copy.begin() , copy.end() );

         int low = 1 ;
         int high = copy[n-1];
         int ans = -1;

         while(low<=high){
            int mid = low+(high-low)/2;
            if(isValid(bloomDay,mid,k,m) == true){
                ans = mid ;
                high = mid-1;
            }
            else{
                low = mid+1;
            } 
         }

        return ans; 
    }
}; 