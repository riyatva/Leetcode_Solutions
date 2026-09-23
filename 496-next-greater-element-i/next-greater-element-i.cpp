class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        int n1 = nums1.size();
        vector<int>ans(n1,0);
        int n2 = nums2.size();

        stack<int>st;
        st.push(-1);  
        map<int,int>mp;

        for(int i=n2-1;i>=0;i--){
           while(st.top()!=-1 && nums2[i] > st.top()){
               st.pop();
           }
           mp[nums2[i]] = st.top();
           st.push(nums2[i]);
        }

        for(int i=0;i<n1;i++){

            ans[i] = mp[nums1[i]];
 
        }

        return ans; 
    }
};