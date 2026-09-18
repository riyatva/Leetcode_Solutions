class Solution {
public:
    bool isValid(vector<int>&weights,int days, int minW){
        int n = weights.size();
        int d = 1; // Pehle hi pehle din ko pakad lo.
        // Hum load karte chalengein package ko.
        int s = 0 ;

        for(int i=0;i<n;i++){
           s+=weights[i];
           if(s > minW){
            // Jab s exceed ho gya ho toa dusra din lag jaaye .
               d++;
               i--;
               s = 0;
           }
           if(d>days){
               return false;
           }
        }

        cout<<s<< " "<<d <<endl; 

      return true;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        int sum = 0;
        for(int i=0;i<n;i++){
           sum+=weights[i];
        } 
    
        int low = 1;
        int high = sum;
        int ans = 0;
        // Inn qs mein low and high bhi answer ho sakta hai isiley low == high ho sakta hai .

        while(low<=high){
            // mid weight represent kar raha hai 
            int mid = low + (high-low)/2;
            if(isValid(weights,days,mid) == true){
                 ans = mid ;
                 high = mid-1 ; // Since hume least weight nikalna hai .
            }
            else{
                low = mid+1;
            }
        }
        return ans ;
    }
};