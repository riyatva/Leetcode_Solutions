class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {

        int n = arr.size();
         
         int low = 0;
         int high = n-1;
         int ans = 0;
         while(low<high){
            int mid = low + (high-low)/2;
            // There is a possibility of answer.
            if( arr[mid] > arr[mid+1] ){
                ans = mid;
                high = mid ;
            }
            else{
                
                low = mid+1 ;
            }
         }

        return ans ;
    }
};