class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
           int n = nums.size();
           vector<vector<int>>ans;
           sort(nums.begin() , nums.end());

           // This is taking : O(n2) time.
           for(int i=0;i<n-2;i++) {
              // To avoid Duplicates :
                if( i > 0 && nums[i] == nums[i-1]){
                    continue ;
                }
             // Applying Two sum logic now :
              int target = (-nums[i]);

              // Apply 2 Sum logic here .
              vector<int>a;
              int j = i+1;
              int k = n-1;

              while(j<k){

                if(nums[j] + nums[k] < target ){
                    j++;
                }
                else if(nums[j] + nums[k] > target){
                    k--;
                }
                else{
                    vector<int>a;
                    a.push_back(nums[i]);
                    a.push_back(nums[j]);
                    a.push_back(nums[k]);
                    j++;
                    k--;
                    ans.push_back(a);
                    while(j<n && nums[j] == nums[j-1]){
                       j++;
                     }
                     while(k>0 && nums[k] == nums[k+1]){
                        k--;
                     }  
                }
               
          
             }

           }
         return ans ;  
    }
};