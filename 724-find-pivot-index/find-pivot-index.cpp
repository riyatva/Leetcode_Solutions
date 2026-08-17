class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int n = nums.size();
        vector<int>prefix(n,0);
        vector<int>suffix(n,0);

        int ps = 0;
        for (int i=0;i<n;i++){
            prefix[i] = ps + nums[i];
            ps = prefix[i];
        }
        for(auto i : prefix){
            cout<<i<<" ";
        }
     
        int ss = 0;
        for(int j=n-1;j>=0;j--){
            suffix[j] = ss + nums[j];
            ss = suffix[j];
        }
        for(int j=0;j<n;j++){
            cout<<suffix[j]<<" ";
        }
       
       int ans = -1;
       for(int i=0;i<n;i++){
          if(prefix[i] == suffix[i]){
            ans = i;
            break;
          }
       }
        return ans;
    }
};