class Solution {
public:

    bool isValid(vector<int>citations, int mid){
       int n = citations.size();
       
       int cnt = 0;
       for(int i=0;i<n;i++){
          if(citations[i] >= mid){
             cnt = n-i;
             break ;
          }
       }

       if( cnt >= mid){
         return true;
       }
         
         return false ;
    }
    int hIndex(vector<int>& citations) {

        int n = citations.size();

        

        
        int low = 0; // minimum  value 
        int high = citations[n-1];
        int ans = -1;

        while(low<=high){
            int mid = low + (high-low)/2;
            cout<<mid<<" ";
            if(isValid(citations,mid) == true){
                ans = mid;
                // hume maximum find karna hai so ;
                low = mid+1;
            }
            else{
                high = mid-1;
            }
          }
         return ans;   
    }
};

// Hum guess kar sakte hain : ek number aur dekh sakte hain kitne (cnt) papers uske equal ya usse zyada baar citied ho paayein .