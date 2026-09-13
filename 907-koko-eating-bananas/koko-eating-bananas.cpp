class Solution {
public:

    bool isValid(int mid,vector<int>&piles, int h){

        int n = piles.size();

        // Har pile ko khaane mein kitna time lagegaa : (piles[i] / mid) + remainder  -> itne hours lagegein.
        long long int ans = 0;

        for(int i=0;i<n;i++){
            if( piles[i] <= mid ){
                ans+=1;
            }
            else{
             ans +=  (piles[i]/mid) ;
             if(piles[i]%mid > 0){
                ans+=1;
               }
            }
        }

        if(ans > h){
             return false;
        }

        return true;

    }
    
    int minEatingSpeed(vector<int>& piles, int h) {
          int n = piles.size();
           
          int low = 1;

          vector<int>copy = piles  ;
          sort(copy.begin(),copy.end());

          int high = copy[n-1];
          int ans = 0;

          while(low<=high){

            int mid = low+(high-low)/2;
            cout<<mid <<" ";

            bool valid = isValid(mid,piles,h);
           

            if(valid == false){

                low = mid+1;

            }
            else{

                ans = mid ;
                high = mid-1;

            }

          }

        return ans;
    }
};