class Solution {
public:
    void f(int idx,vector<int>&nums,vector<vector<int>>&ans , vector<int>ds){
         int n = nums.size();
         if(idx >= n){
            ans.push_back(ds);
            return ;
         }
         // Take 1 :
          ds.push_back(nums[idx]);
         f(idx+1,nums,ans,ds);
         // We need to reverse our decision :
         ds.pop_back();
         // Not Take :
         f(idx+1,nums,ans,ds);

    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>>ans;
        vector<int>ds;
        f(0,nums,ans,ds);
        return ans ;
    }
};