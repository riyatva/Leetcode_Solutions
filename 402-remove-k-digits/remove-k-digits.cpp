class Solution {
public:
    string removeKdigits(string num, int k) {

       string result = "" ;
       int n = num.length();
       cout<<n<<endl; 
       if(n==k){
         return "0";
       } 
       for(int i=0;i<n;i++){
          while(result.length() > 0 && result.back() > num[i] && k>0){
             result.pop_back();
             k--;
          }
          //Handle trailing zeroes: 
           if(result.length() > 0 || num[i] != '0' ){
             result+=num[i];
           }
         
       }
       cout<<result<<" "<<result.length()<<"k"<<k<<endl;

       // 12345  , k == 2 koi delete hua hi nhi hoga toa ab karte hain delete .
     
      while(k>0 && result.length() > 0 ){
        result.pop_back();
         k--;
      }
      cout<<result << " " << k <<endl;


       if(result.length() == 0){
         return "0";
       }  
      
      return result;
    }
};