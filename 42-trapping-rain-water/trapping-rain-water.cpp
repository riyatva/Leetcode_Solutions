class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int>ngr(n,0);
        int max_r  = -1e9;

        for(int i=n-1;i>=0;i--){
            max_r = max(max_r,height[i]);
            ngr[i] = max_r  ;
          
        }

      

        vector<int>ngl(n,0);
        int max_l = -1e9;
        for(int i=0;i<n;i++){
            max_l = max(max_l,height[i]);
            ngl[i] = max_l;
           
        }
        
        // Ab har element ko check kareingein iski roof pe paani bhar sakta hai ya nahi ?
        int total = 0;
        for(int j=0;j<n;j++){
            if(ngr[j] == -1 || ngl[j] == -1){
                continue;
            }
            cout<<j<<" "<<endl;
            int water_collected = min(ngr[j],ngl[j]) - height[j];
             
             cout<<"water_collected_at_it's_index" <<" "<<water_collected<<endl;
             if(water_collected < 0){
                water_collected  = 0;
             }
             total+=water_collected;
        }
         return total;
    }
}; 