class Solution {
public:
    int maximumSum(vector<int>& arr) {

        int n = arr.size();

        int maxi = arr[0] ;
        int one_delete = arr[0] ;
        int no_delete =  arr[0] ;
         if(n==1){
            return maxi ;
         }

        for(int i=1;i<n;i++){
            // 2 choices : 

            // Means One_delete kar sakte hain hum , so left with 2 choices ya toa nodelete ya phir one_delete .
             one_delete =  max( no_delete , one_delete+arr[i] ) ;
            
            //No delete means we don't want to delete so choices are fresh start ya arr[i] ko apne running sum mein include kar lo .
             no_delete = max( arr[i] , no_delete+arr[i]);
  
            maxi = max(maxi,max(one_delete,no_delete)); 
        }

        return maxi ;
    }
};