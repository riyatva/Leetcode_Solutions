class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
         
         int n = nums.size();
         vector<int>ans ;
         int p = 0;
         for(int i=0;i<n;i++){
               if(nums[i]<0){
                p++;
               }
         }
        // for negative numbers wala i .
         int i = p-1;
         //For positive numbers wala 
         int j = p ;

         // Squaring all the elements :

         for(int i=0;i<n;i++){
            nums[i] = nums[i]*nums[i] ;
         }

         while(i>=0 && j<n){

              if(nums[i] < nums[j]){
                ans.push_back(nums[i]);
                i--;
              }
              else{
                ans.push_back(nums[j]);
                j++;
              }
         }

         while(j<n){
             ans.push_back(nums[j]);
             j++;
         }
        
        while(i>=0){
            ans.push_back(nums[i]);
            i--;
        }

     return ans;
    }
};