class NumArray {
    vector<int>prefix;
public:
    NumArray(vector<int>& nums) {
      int n = nums.size();

      prefix.resize(n,0);
      // this is the constructor right. We can have a prefix sum here .
      prefix[0]=nums[0];

      //precalculate the prefix Sum :
      for(int i=1;i<n;i++){
        prefix[i] = prefix[i-1]+nums[i];
      } 
    } 
    int sumRange(int left, int right) {
        int ans;
        if(left == 0){
            ans = prefix[right];
        }
      else{ 
        ans = prefix[right] - prefix[left-1];
      }
      return ans ;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */