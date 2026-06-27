class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
         //My approach i rahegaa jahan element aake rahegaa aur j unique element laaygaa 
        int n = nums.size();
        int i = 0;
        int j = 1;

        while(j<n){
            if(nums[i] == nums[j]){
                j++;
            }
            else{
                i++;
                nums[i] = nums[j];
            }
        }
       return (i+1);
    }
};