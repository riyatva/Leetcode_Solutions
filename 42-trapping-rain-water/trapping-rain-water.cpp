class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int>ngr(n,0);
        stack<int>str; // element hi store karna hai hume.
        str.push(-1);
        int max_r  = -1e9;

        for(int i=n-1;i>=0;i--){

            while(str.top()!=-1 &&  str.top()<height[i]){
                str.pop();
            }
            max_r = max(max_r,str.top());
            // Kyunki hame  maximum element left or right se matlab hai naki ngr se .
            ngr[i] = max_r;
            str.push(height[i]);
        }

        for(int i=0;i<n;i++){
            cout<<ngr[i]<<" ";
        }

        vector<int>ngl(n,0);
        stack<int>stl;
        stl.push(-1);
        int max_l = -1e9;

        for(int i=0;i<n;i++){
            while(stl.top()!=-1 && stl.top() < height[i]){
                stl.pop();
            }
            max_l = max(max_l,stl.top());
            ngl[i] = max_l;
            stl.push(height[i]);
        }


        cout<<"ngl"<<endl;    
        for(int i=0;i<n;i++){
            cout<<ngl[i]<<" ";
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