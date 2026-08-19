class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int n = nums.size();
        int start_value ;
        // Start kar sakte hai , abs(-ve value jo highest hogi right -1 )
        // Find Highest negative value.
          int mini = 1e9;
          int prefix = 0;
          int left = 0;

        for(int i=0;i<n;i++){
            left+=nums[i];
            mini = min(mini,left);   
        }

        if(mini < 0){
            start_value = 1-mini;
        }
        else{
            start_value = 1;
        }
        return start_value;
    }
};