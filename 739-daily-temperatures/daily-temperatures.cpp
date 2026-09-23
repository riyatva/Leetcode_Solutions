class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {

          int n = temperatures.size();
          vector<int>ans(n,0);

          stack<pair<int,int>>st;
          st.push({-1,0});

          for(int i=n-1;i>=0;i--){
              while(st.top().first != -1 && st.top().first  <= temperatures[i]){
                 st.pop(); 
              }
               if(st.top().first != -1){
                 ans[i] = st.top().second - i ; // (index nikalna hai na)
               }
               else{
                  ans[i] = st.top().second ; // index 0 pe set kar do .
               }
               st.push({temperatures[i] , i});
               cout<<st.top().first << " "<<st.top().second <<endl;
          }

          return ans;          
    }
};